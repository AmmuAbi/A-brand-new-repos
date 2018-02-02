#include <stdio.h>
void main()
{
	char b[100];
	int l,i,word=1;
	printf("ENTER A STRING: ");
	scanf("%d",b);
	l=strlen(b);
	for(i=0;i<len;i++)
	{
		if(b[i]!=' ' && b[i+1]==' ')
			word=word+1;
	}
	printf("\n%d",word);
}
