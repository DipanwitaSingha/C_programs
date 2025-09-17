#include<stdio.h>
#include<string.h>
int main()
{
 char str1[50]="Hello";
 char str2[50];
 
 int length =strlen(str1);
 printf("Length :%d\n",length);
 strcpy(str2,str1);
 printf("Copied String:%s\n",str2);
 return 0;
}
