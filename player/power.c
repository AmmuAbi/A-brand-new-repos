#include <stdio.h>
#include<math.h>
int main(void) {
	int a,b,c,power;
	float ans;
	scanf("%d%d%d",&a,&b,&c);
	power=pow(a,b);
	ans=power%c;
	printf("%f",ans);
	return 0;
}
