#include<stdio.h>
void main()
{
int a[10],i,j,swap,size;
printf("enter the size of an array");
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
swap=a[i];
a[i]=a[j];
a[j]=swap;
}
}
printf("the sorted array is");
for(i=0;i<size;i++)
{
printf("%d",a[i]);
}
}
