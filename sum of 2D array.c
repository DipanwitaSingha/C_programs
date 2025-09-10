#include<stdio.h>
int main()
{
	int a[10][10],j,i,sum=0;
	
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<2;i++)
	{

	sum=0;
		
		for (j=0;j<2;j++)
		{
			sum=sum+a[i][j];
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
		printf("%d\n",sum);
	}
	
}
