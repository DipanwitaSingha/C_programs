#include<stdio.h>
int main()
{
	int i,n,j,t;
	int a[]={2,5,78,34,10};
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
	
	for (j=i+1;j<n;j++)
	{
		if (a[i]<a[j])
		{ 
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		}
	}
}
	for (i=0;i<n;i++)
	printf("%d ",a[i]);
}
