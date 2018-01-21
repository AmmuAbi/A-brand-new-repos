#include<stdio.h>
void main()
{
int a,s,d,i,val,result=0;
printf("enter the first term and total number of terms");
scanf("%d%d",&a,&s);
printf("enter the common difference");
scanf("%d",&d);
val=a;
for(i=0;i<s;i++)
{
printf("%d",i);
result+=val;
val=val+d;
}
printf("sum of ap series &d:",result);
}
