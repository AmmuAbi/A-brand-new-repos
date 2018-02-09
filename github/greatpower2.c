#include<stdio.h>
void main()
{
int i,n;
printf("enter the number");
scanf("%d",&n);
for(i=n;i<100;i++)
{
if(i%2==0)
{
printf("%d",i);
break;
}
}
}
