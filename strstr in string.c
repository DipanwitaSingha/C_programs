#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="Welcome to C programming";
	char *result=strstr(str,"C");
	if (result)
	printf("Substring found at:%ld\n",result-str);
	return 0;
}
