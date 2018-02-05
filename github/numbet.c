#include<stdio.h>
#include<conio.h>
void main()
{
int n,h,l;
printf("enter the number");
scanf("%d",&n);
printf("enter the interval low and high respectively");
scanf("%d%d",&l,&h);
if((n>l)&&(n<h))
{
printf("yes");
}
else
{
printf("no");
}
}
