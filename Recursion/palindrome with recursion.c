#include<stdio.h>
int r,revnum;
int main()
{
	int num,r;
	printf("Enter the number: ");
	scanf("%d ",&num);
	r=rev(num);
	printf("%d",r);
}
int rev(int n)
{
	if (n==0)
	return 0;
	else
	{
	r = n % 10;
    revnum = revnum * 10 + r;
    rev(n/10);
    return revnum;
}
}

