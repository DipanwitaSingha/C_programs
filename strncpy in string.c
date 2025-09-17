#include<stdio.h>
#include<string.h>
int main()
{
	char src[]="Programming";
	char dest[20];
	strncpy(dest,src,4);
	dest[4]='\0';
	printf("Copied:%s\n",dest);
	return 0;
}
