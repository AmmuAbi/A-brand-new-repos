#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int i;
printf("enter the input");
scanf("%s",a);
strcpy(b,a);
strrev(a);
i=strcmp(a,b);
if(i==0)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
}
