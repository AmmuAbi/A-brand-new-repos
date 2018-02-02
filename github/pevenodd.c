#include<stdio.h>
#include<conio.h>
void main()
{
int a,s,p;
printf("enter the two numbers");
scanf("%d%d",&a,&s);
p=s*a;
printf("the product is %d",p);
if(p%2==0)
{
printf("even");
}
else
{
printf("odd");
}
}
