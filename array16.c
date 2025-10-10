#include<stdio.h>
int main()
{
	int n,i,arr[]={1,2,3,4,5};
	int t,k;
	for(i=0;i<5;i++)
	{
		if (arr[i]%2==0)
		{
		
		t=2*(arr[i]);
		printf("Double:%d\n",t);
	}
		else
		{
		
		k=3*(arr[i]);
		printf("Triple:%d\n",k);
	
	}
	}
	
}
