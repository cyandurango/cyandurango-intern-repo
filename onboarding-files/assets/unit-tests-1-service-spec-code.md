```js
import { Test, TestingModule } from '@nestjs/testing';
import { UserService } from './user.service';
import { User } from './entities/user.entity';
import { ObjectLiteral, Repository } from 'typeorm';
import { NotFoundException } from '@nestjs/common';
import { getRepositoryToken } from '@nestjs/typeorm';
import { getQueueToken } from '@nestjs/bullmq';

const mockUser = {
  id: 1,
  name: 'Cyril',
  age: 25,
  internalId: 'USR-123',
  email: 'cyril@example.com',
};

const mockUserRepository = () => ({
  find: jest.fn(),
  findOneBy: jest.fn(),
  create: jest.fn().mockReturnValue(mockUser),
  save: jest.fn().mockReturnValue(mockUser),
  preload: jest.fn(),
  remove: jest.fn().mockReturnValue(mockUser),
});

const mockEmailQueue = {
  add: jest.fn().mockResolvedValue({ id: 'job_id' }),
};

type MockRepository<T extends ObjectLiteral = any> = Partial<
  Record<keyof Repository<T>, jest.Mock>
>;

describe('UserService', () => {
  let service: UserService;
  let userRepository: MockRepository<User>;
  let emailQueue: Record<string, jest.Mock>;

  beforeAll(() => {
    process.env.ENCRYPTION_KEY = '12345678901234567890123456789012';
  });

  beforeEach(async () => {
    const module: TestingModule = await Test.createTestingModule({
      providers: [
        UserService,
        {
          provide: getRepositoryToken(User),
          useFactory: mockUserRepository,
        },
        {
          provide: getQueueToken('email-queue'),
          useValue: mockEmailQueue,
        },
      ],
    }).compile();

    service = module.get<UserService>(UserService);
    userRepository = module.get<MockRepository<User>>(getRepositoryToken(User));
    emailQueue = module.get<Record<string, jest.Mock>>(
      getQueueToken('email-queue'),
    );
  });

  it('should be defined', () => {
    expect(service).toBeDefined();
  });

  describe('create', () => {
    it('should successfully create a user with age and internalId', async () => {
      const dto = {
        name: 'Cyril',
        age: 25,
        internalId: 'USR-123',
        email: 'cyril@example.com',
      };
      const result = await service.create(dto);

      expect(userRepository.create).toHaveBeenCalledWith(dto);
      expect(userRepository.save).toHaveBeenCalled();
      expect(emailQueue.add).toHaveBeenCalledWith('send-welcome-email', {
        email: mockUser.email,
        name: mockUser.name,
      });
      expect(result).toEqual(mockUser);
    });
  });

  describe('findOne', () => {
    it('should return a user if found', async () => {
      userRepository.findOneBy!.mockReturnValue(mockUser);

      const result = await service.findOne(1);
      expect(result).toEqual(mockUser);
    });

    it('should throw NotFoundException if user not found', async () => {
      userRepository.findOneBy!.mockReturnValue(null);

      try {
        await service.findOne(1);
      } catch (err) {
        expect(err).toBeInstanceOf(NotFoundException);
      }
    });
  });
  describe('update', () => {
    it('should update age and name successfully', async () => {
      const dto = { name: 'Updated Cyril', age: 26 };
      userRepository.preload!.mockResolvedValue({ ...mockUser, ...dto });
      userRepository.save!.mockResolvedValue({ ...mockUser, ...dto });

      const result = await service.update(1, dto);
      expect(result.name).toEqual('Updated Cyril');
      expect(result.age).toEqual(26);
      expect(userRepository.save).toHaveBeenCalled();
    });
  });
  describe('remove', () => {
    it('should remove a user', async () => {
      userRepository.findOneBy!.mockResolvedValue(mockUser);
      const result = await service.remove(1);
      expect(userRepository.remove).toHaveBeenCalledWith(mockUser);
      expect(result).toEqual(mockUser);
    });
  });
});
```
