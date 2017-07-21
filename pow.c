#include<stdio.h>
void main()
{
int b,e,i,sum=1;
printf("enter the number");
scanf("%d",&b);
printf("enter the number");
scanf("%d",&e);
for(i=0;i<e;i++)
{
sum=sum*b;
}
printf("%d^%d=%d",&b,&e,&sum);
}
