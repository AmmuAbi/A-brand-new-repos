#include <stdio.h>
#include<string.h>
int main(void) {
    char a[100];
    int i,j,len,c=0;
    printf("enter the string\n");
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
    for(j=i+1;j<len;j++)
    {
    	if(a[i]==a[j])
    	{
    		c++;
                   
    	}
    }
    }
   if(c>0)
    {
    	printf("not an isogram");
    }
    else
    {
    	printf("isogram");
    }
	return 0;
}
