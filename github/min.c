#include<stdio.h>
void main()
{
int a[50],i,min,size;
printf("enter the array size");
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=1;i<size;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("the minimum element is %d",min);
}

