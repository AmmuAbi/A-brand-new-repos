#include<stdio.h>
void main()
{
int n,sum=0;
printf("enter the number");
scanf("%d",n);
while(n>0)
{
n=n/10;
sum=sum+1;
}
printf("sum of integer digit is %d",sum);
}

