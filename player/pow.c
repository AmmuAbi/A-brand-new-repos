#include <stdio.h>
#include<math.h>
int main(void) {
	int a,b,c,p;
	float ans;
	scanf("%d%d%d",&a,&b,&c);
	p=pow(a,b);
	ans=p%c;
	printf("%f",ans);
	return 0;
}
