#include<stdio.h>
int main()
{
	int m[10],i,k=2,n=5,a,arr[]={1,2,3,4,5},j=0;
	for (i=0;i<n;i++)
	{
		j=++k%n;
		m[i]=arr[j];
		
	}
	for (i=0;i<n;i++)
	{
		printf("%d",m[i]);
	}
}
