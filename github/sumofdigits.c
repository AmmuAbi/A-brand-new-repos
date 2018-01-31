#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum=0,n,a;
printf("enter the digit");
scanf("%d",&a);
a=num;
while(a!=0)
{
n=a%10;
sum=sum+n;
n=n/10;
}
printf("the sum of the digit is %d",sum);
return 0;

}
