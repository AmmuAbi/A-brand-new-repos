#include <stdio.h>

int main(void) {
    int a,b,n,d,c,i;
    printf("entre the no. of lines\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d%d",&a,&b);
    	scanf("%d%d",&c,&d);
    	printf("%d\n",a/b);
    	printf("%d\n",c%d);
    }
	return 0;
}
