#include <stdio.h>
void main()
{
	char a[100];
	int l,i,word=1;
	printf("ENTER A STRING: ");
	scanf("%d",a);
	l=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]!=' ' && a[i+1]==' ')
			word=word+1;
	}
	printf("\n%d",word);
}
