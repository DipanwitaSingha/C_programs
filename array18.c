#include<stdio.h>
int sum(int n,int *q)
{	
	*q=*q+n;
	return *q;
}
int main()
{
	int arr[6]={1,2,3,4,5,6};
	int *W=arr;
	int i,q=0;
	for (i=0;i<6;i++)
	{
		q=sum(*(W + i),&q);
		printf("%d\n", *(W + i));
	}
	printf("%d\n",q);
	return 0;
}
