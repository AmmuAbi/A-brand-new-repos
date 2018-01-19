#include<stdio.h>
int fac(int);
void main()
{
int n,f;
printf("enter the value");
scanf("%d",&a);
f=fac(x);
printf("factorial is %d",f);
}
int fac(int m)
{
if(m==0)
{
return 1;
}
else
{
return m*fac(m-1);'
}
}
