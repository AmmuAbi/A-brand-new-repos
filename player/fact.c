#include <stdio.h>

int main(void) {
	int n,f=1,i;
	scanf("%d",&n);
	if(n==0)
	{
		printf("factorial=1");
	}
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("%d",f);
	return 0;
}
