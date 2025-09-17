#include<stdio.h>
#include<string.h>
int main()
{
	char first[30]="Hello, ";
	char second[]="World!";
	strcat(first,second);
	printf("Concatenated:%s\n",first);
	return 0;
}
