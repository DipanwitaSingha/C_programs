#include<stdio.h>
int main()
{
	int a[10][10],j,i;
	int n;
	n=3;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{ 
			scanf("%d",&a[i][j]);
		}
	}

	for (i=0;i<n;i++)
	{
	
		
		for (j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	
for (i=0;i<n;i++)
printf("%d ",a[i][n-i-1]);

}

