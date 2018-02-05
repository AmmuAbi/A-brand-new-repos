#include<stdio.h>
void main()
{
int n;
printf("enter the number which is power of 2");
scanf("%d",&n);
if(n&(n-1)==0)
{
printf("yes");
}
else
{
printf("no");
}
}
