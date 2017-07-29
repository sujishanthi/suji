#include<stdio.h>
int main()
{
int arr[10],i;
printf("enter the array");
for(i=0;i<3;i++)
scanf("%d",&arr[i]);
if((arr[i]>arr[i+1])&&(arr[i]>arr[i+2]))
printf("maximum number");
else if((arr[i+1]>arr[i+2])&&(arr[i+1]>arr[i]))
printf("minimum number");
else
return 0;
}
