#include<stdio.h>
int main()
{
int a,b,p,i,flag=0;
printf("enter the values");
scanf("%d%d",&a,&b);
p=a*b;
for(i=1;i<p;i++)
{
    if((p/i)==i)
    {
        flag=1;
    }
    
}
if(flag==1)
{
    printf("perfect square");
}
else
{
    printf("not a perfect square");
}
    return 0;
}
