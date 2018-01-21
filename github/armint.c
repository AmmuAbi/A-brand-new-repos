#include<stdio.h>
void main()
{
int a,b,i,temp,rem;
int result=0;
printf("enter the intervals");
scanf("%d%d",a,b);
printf("the armstrong number between two intervals are");
for(i=a+1;i<b;++i)
{
temp=i;
while(temp!=0)
{
rem=(temp%10);
result+=rem*rem*rem;
temp=temp/10;
}
}
if(i==result)
{
printf("%d",i);
}
}
