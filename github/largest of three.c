#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the values of the three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("%d is greater",a);
}
}
elseif(b>c)
{
printf("%d is greater",b);
}
else
{
printf("%d is greater",c);
}
}
