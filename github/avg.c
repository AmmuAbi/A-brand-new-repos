#include <stdio.h>
void main()
{
	int n,sum=0,i,a;
	printf("enter the no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	a=sum/n;
	printf("avg is %d",a);
}
