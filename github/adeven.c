#include<stdio.h>
#include<conio.h>
void main()
{
int a,s,add;
printf("entre the two nmbers");
scanf("%d%d",&a,&s);
add=a+s;
printf("the sum of two numbers is %d",add);
if(add%2==0)
{
printf("even");
}
else
{
printf("odd");
}
}
