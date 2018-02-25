#include <stdio.h>

int main(void) {
	int tem;
	printf("enter the temperature in celsius:");
	scanf("%d",&tem);
	tem=tem+273;
	printf("%d",tem);
	return 0;
}
