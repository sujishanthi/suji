#include<stdio.h>
void main()
{
int r,n,sum=0,temp;
scanf("%d",&n);
temp=n;
while(n>=0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
printf(sum==temp)
printf("palindrome");
else
printf("not a palindrome");
}
