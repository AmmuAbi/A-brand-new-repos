#include <stdio.h>

int main(void) {
	int num,rem,n;
	printf("enter the number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		n=(n*10)+rem;
		num=num/10;
	}
	printf("the reversed number is :%d",n);
	return 0;
}
