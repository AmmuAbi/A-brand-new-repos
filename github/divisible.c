#include <stdio.h>

int main(void) {
	int num;
	printf("enter the number:");
	scanf("%d\n",&num);
	while(num%2==0)
	{
		num=num/2;
		if((num%2)==1)
		break;
	}
	printf("the ans is %d",num);
	return 0;
}
