#include <stdio.h>
#include<string.h>
void main()
{
    int s = 0;
    char str[1000];
    fgets(str,1000,stdin);
    
    for(int i = 0; str[i]!='\0'; i++){
        if(!isalpha(str[i]) && !isdigit(str[i]))
        s++;  
    }
    printf("%d",s);
}
