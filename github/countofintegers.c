#include<stdio.h>
void main()
  int a,c=0;
printf("Enter the number");
scanf("%d",a);
while(a>0)
{
a=a/10;
c=c+1;
}
printf("sum of integer digit is %d",c);
}

