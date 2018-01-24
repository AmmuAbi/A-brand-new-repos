#include<stdio.h>
void main()
{
int min,hour,m;
printf("enter the time in min");
scanf("%d",&min);
hour=min/60;
m=min%60;
printf("the hour and minutes are %d %d",hour,m);
}
