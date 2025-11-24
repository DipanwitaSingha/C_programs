#include<stdio.h>
int main()
{
	int n,ogn,r,result=0;
	printf("Enter a three-digit integer: ");
	scanf("%d",&n);
	ogn=n;
	for ( ;ogn!=0;ogn=ogn/10)
	{
		r=ogn%10;
		result+=r*r*r;
	}
	if(result==n)
	printf("%d is an Armstrong number.",n);
	else
	printf("%d is not an Armstrong number.",n);
	return 0;
	
}
