include<stdio.h>
void main()
{
int n,sum=0,d,a;
printf("enter the number to be checked");
scanf("%d",&n);
a=n;
while(a!=0)
{
d=a%10;
sum=sum+d*d*d;
a=a/10;
}
if(sum==n)
{
printf("armstrong");
}
else
{
printf("not an armstrong");
}
}
