#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
int f=0;
printf("enter the number to be checked for prime");
scanf("%d",a);
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
f=1;
}
}
if(f!=0)
{
   printf("composite");
  }
   else
   {
      printf("no");
   }
}
