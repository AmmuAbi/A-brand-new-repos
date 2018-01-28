#include<stdio.h>
void main()
{
int n,i,big,small;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("%d",a[i]);
}
big=a[0];
for(i=0;i<n;i++)
{
if(big<a[i])
{
big=a[i];
}
}
printf("\n largest number%d",big);
}
small=a[0];
for(i=0;i<n;i++)
{
if(small>a[i])
{
small=a[i];
}
}
printf("the largest valuve is%d",small);
}
