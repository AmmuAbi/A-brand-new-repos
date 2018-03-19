#include <stdio.h>

int main(void) {
	int a[10],i,min,n,smin;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	smin=min;
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]!=smin)
		{
			if(a[i]<min)
			{
				min=a[i];
			}
		}
	}
	printf("%d is the second smallest",min);
	return 0;
}
