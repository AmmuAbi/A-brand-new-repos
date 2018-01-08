#include<stdio.h>
void main()
{
int year;
printf("Enter the yearb to be checked for leap year or not");
scanf("%d",&year);
if(year%4==0)
{
printf("LEAP YEAR");
}
else
{
printf("NO");
}
}
