#include<stdio.h>
void main()
{
int a[50],i,max,size;
printf("enter the array size");
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<size;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("the maximum element is %d",min);
}
