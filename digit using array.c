#include<stdio.h>
int count(int n)
{
	int c=0;
	while(n>0)
	{
		c++;
		n=n/10;
	}
	return c;
}
int main()
{
	int n,i,a[5]={2,7,11,20,9};
	int sum=0,p=1;
	for(i=0;i<5;i++)
	{
		if (count(a[i])==1)
		sum=sum+a[i];
		else
		p=p*a[i];
		
	}
		printf("Addition:%d\n",sum);
		printf("Multiplication:%d\n",p);
	
	return 0;
}
