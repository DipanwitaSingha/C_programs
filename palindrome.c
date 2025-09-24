#include<stdio.h>
#include<string.h>
int main()
{
    char str [100],str1[100];
    int i=0,j=0,len;
    printf("Enter the string:");
    gets(str);
	printf("%s",str);  
    for(i=strlen(str)-1;i>=0;i--)
    {
    	str1[j]=str[i];
    	j++;
	}
	str1[j]='\0';
	printf("\n%s",str1);
	
	int result=strcmp(str,str1);
	 if (result==0)
	 {
	 	printf("str and str1 are palindrome\n");
	 }
	 else 
	{
		printf("str and str1 are not palindrome\n");
	}
	
    
}
