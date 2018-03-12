#include <stdio.h>

int main(void) {
	int a[10],i,l;
	printf("enter the limit\n");
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		if((a[i]+1)!=a[i+1])
		{
			printf("%d",a[i]+1);
			break;
		}
	}
	return 0;
}
