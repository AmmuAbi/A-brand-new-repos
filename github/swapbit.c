#include<stdio.h>
void main()
{
  int a,s;
  printf("enter the two numbers");
  scanf("%d%d",&a,&s);
  printf("\nbefore swapping:a=%d,s=%d",a,s);
  a=a^s;
  s=a^s;
  a=a^s;
  printf("\nafter swapping:a=%d,s=%d",a,s);
  }
