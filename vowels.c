#include<stdio.h>
void main()
{
char i1,j1,c;
printf("enter the value");
scanf("%c",c);
i1=('a','e','i','o','u');
j1=('A','E','I','O','U');
if((c==i1)||(c==j1))
printf("vowels");
else
printf("consonants");
}
