```js
import { Test } from '@nestjs/testing';
import {
  INestApplication,
  ClassSerializerInterceptor,
  ValidationPipe,
  ExecutionContext,
} from '@nestjs/common';
import request from 'supertest';
import { App } from 'supertest/types';
import { UserModule } from '../src/user/user.module';
import { getRepositoryToken } from '@nestjs/typeorm';
import { getQueueToken } from '@nestjs/bullmq';
import { User } from '../src/user/entities/user.entity';
import { AuthGuard } from '@nestjs/passport';
import { PermissionsGuard } from '../src/common/guards/permissions.guard';
import { BullExplorer } from '@nestjs/bullmq/dist/bull.explorer';
import { Reflector } from '@nestjs/core';
import { ConfigService } from '@nestjs/config';
import { CreateUserDto } from 'src/user/dto/create.user.dto';

const mockUser = { id: 1, name: 'Cyril', email: 'cyril@example.com' };

interface AuthRequest extends Request {
  user: { sub: string; email: string };
}

async function createTestApp(guardOverride?: any) {
  const module = await Test.createTestingModule({ imports: [UserModule] })
    .overrideProvider(getRepositoryToken(User))
    .useValue({
      find: jest.fn().mockResolvedValue([mockUser]),
      create: jest.fn().mockImplementation((dto: CreateUserDto) => dto),
      save: jest
        .fn()
        .mockImplementation((u) => Promise.resolve({ id: 1, ...u })),
    })
    .overrideProvider(getQueueToken('email-queue'))
    .useValue({ add: jest.fn() })
    .overrideProvider(BullExplorer)
    .useValue({ explore: jest.fn(), register: jest.fn() })
    .overrideGuard(AuthGuard('jwt'))
    .useValue(guardOverride || { canActivate: () => true })
    .overrideGuard(PermissionsGuard)
    .useValue({ canActivate: () => true })
    .overrideProvider(ConfigService)
    .useValue({
      get: (key: string) => (key === 'JWT_SECRET' ? 'test-secret' : null),
    })
    .compile();

  const app = module.createNestApplication();
  app.useGlobalInterceptors(new ClassSerializerInterceptor(app.get(Reflector)));
  app.useGlobalPipes(new ValidationPipe({ whitelist: true, transform: true }));
  return await app.init();
}

describe('UserController (Integration)', () => {
  let app: INestApplication;
  const server = () => app.getHttpServer() as App;

  afterEach(async () => app && (await app.close()));

  describe('GET /user', () => {
    it('should return all users (Basic)', async () => {
      app = await createTestApp();
      const res = await request(server()).get('/user').expect(200);
      const body = res.body as Record<string, unknown>[];
      expect(body[0]).toMatchObject({
        id: 1,
        name: 'Cyril',
        greetUser: 'Hello, Cyril!',
      });
    });

    it('should return users with a simulated JWT (Authenticated)', async () => {
      app = await createTestApp({
        canActivate: (ctx: ExecutionContext) => {
          const req = ctx.switchToHttp().getRequest<AuthRequest>();
          req.user = {
            sub: 'auth0|1',
            email: 'cyril@example.com',
          };
          return true;
        },
      });
      await request(server())
        .get('/user')
        .set('Authorization', 'Bearer token')
        .expect(200);
    });
  });

  describe('POST /user', () => {
    it('should create a user (Success)', async () => {
      app = await createTestApp();
      const dto = {
        name: 'Cyril',
        email: 'new@example.com',
        age: 25,
        internalId: 'USR-1',
      };
      const res = await request(server()).post('/user').send(dto).expect(201);
      expect(res.body).toMatchObject({
        name: 'Cyril',
        email: 'new@example.com',
      });
    });

    it('should return 400 for invalid email (Failure)', async () => {
      app = await createTestApp();
      await request(server())
        .post('/user')
        .send({ email: 'bad-email' })
        .expect(400);
    });
  });
});
```
