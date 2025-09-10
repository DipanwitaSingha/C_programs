#include<stdio.h>
int isprime(int n)
{
	int i,c=0;
	for (i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if (c==2)
	return 1;
	else
	return 0;
}
int main()
{
	int num,m,i;

	printf("Enter any number to print Prime factors:");
	scanf("%d",num);
	printf("All Prime Factors of %d are:\n",num);
	for (i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			m=i;
		if(isprime(m)==1)
		{
		
		printf("%d",m);
	}
	}
}
}
