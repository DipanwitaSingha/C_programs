#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="C,Java,Python";
	char*token =strlok(str, ",");
	while(token!=NULL)
	{
		printf("%s\n",token);
		token=strlok(NULL,",");
	}
	return 0;
}
