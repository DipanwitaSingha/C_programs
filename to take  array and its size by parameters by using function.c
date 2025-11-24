#include<stdio.h>
int total(int n[],int l)
{
	int sum=0,i;
	for (i=0;i<l;i++)
	{
		sum=sum+n[i];
	}
	return sum;
}
int main()
{
	int arr[6]={1,2,3,4,5,6};
	
	int i,s=0,l;
  l=6;
	
		s=total(arr,l);
		printf("%d\n", s);
	
	
	return 0;
} 

