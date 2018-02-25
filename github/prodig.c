#include <stdio.h>

int main(void) {
	int num,rem,pro=1;
	printf("enter the number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		pro=pro*rem;
		num=num/10;
	}
	printf("the product is:%d",pro);
	return 0;
}
