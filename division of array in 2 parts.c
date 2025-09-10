#include<stdio.h>
int main()
{
	int x,arr[6],i;
	printf("Enter x:\n");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		printf("Enter the %d element:",i);
		scanf("%d",&arr[i]);
	}
	int n=sizeof(arr)/sizeof(arr[0]);
	int j=0,k=0;
	int mid=n/2;
	int n1=mid;
	int n2=n;
	int arr1[n1];
	int arr2[n2];
	for (i=0;i<n1;i++)
	{
		arr1[i]=arr[j];
		j++;
	}
	for ( i=n1;i<n2;i++)
	{
		arr2[k]=arr[i];
		k++;
		
	}
	printf("First half:\n");
	for (i=0;i<j;i++)
	{
		printf("%d",arr1[i]);
	}
	printf("\n");
	printf("Second half:\n");
	for (i=0;i<k-1;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
	return 0;
}
