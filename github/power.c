#include<stdio.h>
void main()
{
int a,b,ans=1;
printf("enter the base");
scanf("%d",a);
printf("enter the power");
scanf("%d",b);
while(b=!0)
{
ans*=a;
--b;
}
printf("answer is %d",ans)
}
