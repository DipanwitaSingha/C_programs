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
	for (j=0;j<2;j++)
	{

	sum=0;
		
		for (i=0;i<2;i++)
	{
	
			
			sum=sum+a[j][i];
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
		printf("%d\n",sum);
	}
	
}
