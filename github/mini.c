#include <stdio.h>

int main(void) {
	int a[10],min,n,i;
	printf("enter the limit:\n");
	scanf("%d",&n);
	printf("the numbers are:\n");
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
	printf("the minimum element is :%d",min);
	return 0;
}
