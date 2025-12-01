#include<stdio.h>
int sum=0;
int sum_d(int n)
{
	if (n==0)
	{
		return 0;
	}
	else
	{
		sum=sum*10+n%10;
		sum_d(n/10);
		return sum;
	}
}
int main()
{
	int n,a=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	a=sum_d(n);
	printf("sum of digit: %d",a);
	return 0;
}
