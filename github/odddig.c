#include <stdio.h>

int main(void) {
	int num,rem;
	printf("enter the number");
	scanf("%d",&num);
	printf("the odd digits are:");
	while(num!=0)
	{
		rem=num%10;
		if(rem%2!=0||rem==1)
		{
			printf("%d\t",rem);
		}
		num=num/10;
		
	}
	return 0;
}
