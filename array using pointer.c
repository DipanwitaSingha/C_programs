#include<stdio.h>
int sum(int n,int *s)
	{	
	*s=*s+n;
	return *s;
}
int product(int n,int *p)
	{
		
		*p=*p*n;
		return *p;
	}
	
int main()
{
	int arr[]={12,5,7,8,9,10};
	int i,s=0,p=1;
	for(i=0;i<6;i++)
	{
	if (arr[i]%2==0)
	{
	s=sum(arr[i],&s);
	}
	else
	{
	p=product(arr[i],&p);
}
}
	printf("%d\n",s);
	printf("%d",p);
	return 0;
}
