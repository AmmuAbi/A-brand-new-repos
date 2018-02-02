#include<stdio.h>
#include<stdio.h>
void main()
{
int a,b,temp;
printf("enter the two numbers");
scanf("%d%d",&a,&b);
printf("the numbers before swapping are a=%d and b=%d",a,b);
a=temp;
temp=b;
b=a;
printf("the number after swapping is a=%d and b=%d",a,b);
}
