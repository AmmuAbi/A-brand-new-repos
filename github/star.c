#include<stdio.h>
#include<string.h>
int main() {
 char a[50];
 int len,hal,half,i;
 printf("enter the string");
 scanf("%s",&a);
 len=strlen(a);
 if(len%2==0)
 {
     half=(len/2)-1;
     hal=(len/2);
     for(i=1;i<=len;i++)
     {
         a[half]='*';
         a[hal]='*';
     }
 }
else
 {
     half=(len/2);
     for(i=1;i<=len;i++)
     {
         a[half]='*';
     }
 }
 printf("the new word is %s",a);
return 0;
    
}
