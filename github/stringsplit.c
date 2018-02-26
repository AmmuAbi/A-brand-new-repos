#include <stdio.h>
#include<string.h>
int main(void) {
	int i,len,a;
	char s[100];
	printf("entre the string\n");
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		a=i+1;
		if(a%2==1)
		{
			printf("%c",s[i]);
		}
	}printf("\n");
	for(i=0;i<len;i++)
		{
	             a=i+1;
	             if(a%2==0)
		
		{
			printf("%c",s[i]);
		}
	}
	return 0;
}
