#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10];
	int c=0,b=0,n,i;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='(')
		{
			c=c+1;
		}
		else
		{
			b=b+1;
		}
	}
	if(c==b)
	{
		printf("balanced");
	}
	else
	{
		printf("not balanced");
	}
	return 0;
}
