#include <stdio.h>

int main(void) {
	int i,l,count=0;
	char a[50];
	printf("enter the string");
	scanf("%s",&a);
	l=strlen(a);
	for(i=0;i<=l;i++)
	{
		if(a[i]=='a'||'e'||'i'||'o'||'u')
		{
			count=count+1;
		}
	}
	if(count>0)
	{
		printf("it has vowel");
	}
	else
	{
		printf("no vowel");
	}
		return 0;
}
