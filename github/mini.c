#include <stdio.h>

int main(void) {
	int a[10],mini;
	printf("the numbers are:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("the minimum element is :%d",min);
	return 0;
}
