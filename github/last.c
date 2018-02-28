#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	int l,i,n;
	printf("enter the string\n");
	scanf("%s",a);
	l=strlen(a);
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=(l-n);i<=l;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
