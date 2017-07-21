#include<stdio.h>
void main()
{
char lowercase,uppercase,c;
printf("enter the value");
scanf("%s",c);
lowercase=('a','e','i','o','u');
uppercase=('A','E','I','O','U');
if((c==lowercase)||(c==uppercase))
printf("vowels");
else
printf("consonants");
}
