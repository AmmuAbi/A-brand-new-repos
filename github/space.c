#include<stdio.h>
void main()
{
char a[100];
int count=0,i;
scanf("%s",&a);
for(i=0;a[i]!=NULL;i++)
{
if(a[i]==' ')
count++;
}
printf("%d",count);
}
