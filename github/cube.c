#include <stdio.h>

int main(void) {
	int a,b,ans=1,i;
	printf("enter the values of a,b\n");
	scanf("%d%d",&a,&b);
	for(i=0;i<b;i++)
	{
		ans=ans*a;
	}
	printf("%d",ans);
	return 0;
}

