#include<stdio.h>
int main()
{
	int n,s;
	printf("Enter the number:");
	scanf("%d",&n);
	s=sum(n);
	printf("%d",s);
	return 0;
}
int sum(int n)
{
	if (n==0)
	return 0;
	else
	return n%10+sum(n/10);
}

