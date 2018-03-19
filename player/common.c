#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10],b[10];
	int i,n,c=0;
	scanf("%s",a);
	scanf("%s",b);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]==b[i])
		{
		       c=c+1;
		       break;
			
		}
	}
	if(c>0)
	{
			printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
