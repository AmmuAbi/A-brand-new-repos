#include <stdio.h>

int main(void) {
	int n,i,num[i],ans=0;
	printf("enter the limit\n");
	scanf("%d",&n);
	printf("enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		ans=ans+num[i];
	}
	printf("the sum value is:");
	printf("%d",ans);
	return 0;
}
