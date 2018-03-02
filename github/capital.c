#include <stdio.h>
#include<string.h>
int main(void) {
	char s[34];
	int len,i;
	scanf("%[^\t\n]s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(i==0)
		{
		s[i]=s[i]-32;
		}
		if(s[i]==' ')
		{
		s[i+1]=s[i+1]-32;
		}
	}
	printf("%s",s);
	return 0;
}
