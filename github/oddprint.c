#include<stdio.h>
#include<conio.h>
void main()
{
int n,r;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
if((r%2)!=0)
printf("%d",r);
n=n/10;
}
}
