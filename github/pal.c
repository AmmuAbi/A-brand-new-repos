#include<stdio.h>
#include<string.h>
void main()
{
char a[10],b[10];
int i;
printf("enter the input");
scanf("%s",a);
strcpy(b,a);
strrev(a);
i=strcmp(a,b);
if(i==0)
{
printf("the given input is a palindrome");
}
else
{
printf("the given input is not a palindrome");
}
}
