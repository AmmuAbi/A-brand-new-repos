#include <stdio.h>
int main(void)
{
int n,k,c=0,r1,rev,r;
scanf("%d %d",&n,&k);
while(k>0)
{
    r=k%10;
    rev=rev*10+r;
    k=k/10;
    c++;
}
while(rev>0)
{r1=rev%10;
    n=n*10+r1;
    rev=rev/10;
}
printf("\n%d",n);
return 0;
}
