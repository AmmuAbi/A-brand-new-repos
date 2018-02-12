#include<stdio.h>
int main()
{
    int val,i;
    printf("enter the value");
    scanf("%d",&val);
    printf("the factors are:");
    for(i=1;i<=val;i++)
    {
        if((val%i)==0)
        {
            printf("%d",i);
        }
    }
    return 0;
}
