#include<stdio.h>
int main()
{
	int n,i,b[]={12,7,5,6,9};
		for(i=0;i<5;i=i+2)
	{
		int t=b[i];
		b[i]=b[i+1];
		b[i+1]=t;
	}
		for(i=0;i<5;i=i+1)
		{
			printf("%d ",b[i]);
		}
		
	
	return 0;
}
