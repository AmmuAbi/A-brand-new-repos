#include <stdio.h>
void main()
{
    int a = 65;
    int s = 120;
    printf(" value of i=%d k=%d before swapping", a, s);
    a = a ^ s;
    s = a ^ s;
    a = a ^ s;
    printf("value of a=%d s=%d after swapping", a, s);
}
