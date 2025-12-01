#include<stdio.h>
int main()
{
	int arr[]={3,6,9,34,42};
	int n = sizeof(arr) / sizeof(arr[0]);
	int s=sum(arr,n);
	printf("Enter the numbers: ");
	printf("%d",s);
}
int sum(int arr[],int n)
{
	if (n==0)
	return 0;
	else
	return arr[n-1]+sum(arr,n-1);
}

