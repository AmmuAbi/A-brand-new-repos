#include<stdio.h>
void main()
{
int n,i,c=0;
printf("enter the number to be checked");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if((n%i)==0)
{
c++;
}
}
if(c==o)
{
printf("prime number");
}
else
{
printf("not a prime");
}
}
