#include<stdio.h>
void main()
{
int a,n,i;
printf("enter the number and limit:");
scanf("%d%d",a,n);
for(i=1;i<=n;i++)
{
if(i%a==0)
{
printf("%d",i);
}
}
}
