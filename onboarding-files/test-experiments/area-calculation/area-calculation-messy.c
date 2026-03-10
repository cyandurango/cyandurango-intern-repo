#include <stdio.h>
#define P 3.14
int main(){float a,b,c;int d;printf("1 for circle, 2 for rect: ");
scanf("%d",&d);if(d==1){printf("r: ");scanf("%f",&a);c=P*a*a;
printf("Area: %f",c);}else if(d==2){printf("l & w: ");
scanf("%f %f",&a,&b);c=a*b;printf("Area: %f",c);}return 0;}