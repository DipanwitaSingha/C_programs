#include<stdio.h>
int s=0;
int p=1;
int sum(int n)
	{
	
	
	s=s+n;
	
	return s;
}
int product(int n)
	{
		
		p=p*n;
		return p;
	}
	
int main()
{
	int arr[]={12,5,7,8,9,10};
	int i;
	for(i=0;i<6;i++)
	{
	if (arr[i]%2==0)
	{
	sum(arr[i]);
	}
	else
	{
	product(arr[i]);
}
}
	printf("%d\n",s);
	printf("%d",p);
	return 0;
}
