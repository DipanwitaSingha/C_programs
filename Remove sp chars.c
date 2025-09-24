#include<stdio.h>
#include<string.h>
 int main()
 {
 	char str[10],b[10];
 	int i=0,j=0,len;
 	printf("Enter the string:");
    gets(str);
	printf("%s",str); 
	for(i=0;i<strlen(str)-1;i++) 
	{
	
	if (str[i]>='a'&& str[i]<='z')
	{
		b[j]=str[i];
		j++;
	}
	
}
b[j]='\0';
	printf("\n%s",b);
	return 0;
 }

