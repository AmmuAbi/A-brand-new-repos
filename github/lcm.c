#include <stdio.h>

int main(void) {
	int a,b,i,ans,g;
	printf("enter the two numbers\n");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a&&i<=b;i++)
	{
		if((a%i==0)&&(b%i)==0)
		{
			g=i;
		}
	}
	ans=(a*b)/g;
	printf("the gcd value is :%d",ans);
	return 0;
}
