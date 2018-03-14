#include <stdio.h>

int main(void) {
	int a[10],n,k,i,min;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			min=a[i];
			a[i]=a[i+1];
			a[i+1]=min;
		}
	}
	for(i=0;i<n;i++)
	{
		if(i==(k-1))
		{
		printf("%d",a[i]);
		}
	}
	return 0;
}
