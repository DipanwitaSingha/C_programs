#include<stdio.h>
int main()
{
	char name[30];
	printf("Enter your name:");
	fgets(name, sizeof(name), stdin); 
    printf("Name: ");
    puts(name);    
    return 0;
}

