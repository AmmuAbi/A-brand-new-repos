#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10],b[10];
	int k,c=0,len,leng,i;
	scanf("%s%s",a,b);
	scanf("%d",&k);
	len=strlen(a);
	leng=strlen(b);
	if(len==leng)
	{
		for(i=0;i<len;i++)
		{
			if(a[i]!=b[i])
			{
				c=c+1;
			}
		}
	}
	if(c==k)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
