#include<stdio.h>
#include<string.h>
int main()
{
	char ar[50];
	int i,j;
printf("Enter the string:");
fgets(ar,sizeof(ar),stdin);
ar[strcspn(ar, "\n")] = '\0';
for (i=0;ar[i]!='\0';i++)
{
	if(ar[i]>='a' && ar[i]<='z')
	printf("%c",ar[i]-32);
	else
	printf("%c",ar[i]+32);
}
//printf("%c\n",ar[i]);
return 0;
}
