#include <stdio.h>

int main(void) {
	int n,k,a[10],i,c=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			c=c+1;
			if(c==k)
			{
				printf("%d",a[i]);
				break;
			}
		}
		
            }
	return 0;
}
