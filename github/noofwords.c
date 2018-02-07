#include <stdio.h>
void main()
{
	char b[100];
	int len,i,word=1;
	printf("ENTER A STRING: ");
	scanf("%d",&b);
	len=strlen(b);
	for(i=0;i<len;i++)
	{
		if(b[i]!=' ')
			word=word+1;
	}
	printf("\n%d",word);
}
