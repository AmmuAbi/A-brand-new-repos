#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter the number:");
scanf("%d",&a);
if(a<0)
printf("NEGATIVE");
elseif(a>0)
printf("POSITIVE");
else
printf("ZERO");
}
