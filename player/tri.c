#include <stdio.h>

int main(void) {
	int a,b,c,k=0;
	scanf("%d%d%d",&a,&b,&c);
	if(a!=0&&b!=0&&c!=0)
	{
	if(a<180&&b<180&&c<180)
	{
		if((a+b+c)==180)
		{
			k=k+1;
		}
	}
	}
	if(k>0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
