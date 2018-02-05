#include<stdio.h>
#include<conio.h>
void main()
{
int a,s,sub;
printf("entre the two nmbers");
scanf("%d%d",&a,&s);
sub=a-s;
printf("the sum of two numbers is %d",sub);
if(sub%2==0)
{
printf("even");
}
else
{
printf("odd");
}
}
