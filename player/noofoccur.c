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
		if(a[i]==b[0])
		{
		       c=c+1;
			
		}
	}
	if(c>0)
	{
			printf("%d",c);
	}
	else
	{
		printf("no such character");
	}
	return 0;
}
