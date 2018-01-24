#include<stdio.h>
int main()
{
	char s[32],count=0,i;
  scanf("%s",&s);
	for(i=0;s[i]!=NULL;i++)
	{
	if(s[i]>='0' && s[i]<='9')
	count++;
	}
	printf("%d",count);
	}
  }
