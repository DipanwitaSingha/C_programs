#include<stdio.h>
int main()
{
	int arr[6]={1,2,3,4,5,6};
	int *W=arr;
	int i;
	for (i=0;i<6;i++)
	{
		printf("%d\n", *(W + i));
	}
}
