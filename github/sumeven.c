#include <stdio.h>

void main() 
{
	int n,m,pro;
	scanf("%d%d",&n,&m);
	pro=(m*n);
	printf("%d",pro);
	
	if(pro%2==0)
	printf("\n even");
	
	return 0;
}
