#include<stdio.h>
int main()
{
	int a[10][10],j,i,b[10][10],n;
	n=3;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d ",&a[i][j]);
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
{
	for(j=0;j<n;j++)
	{
	b[i][j]=a[j][i];
}
}
for (i=0;i<n;i++)
	{
		
		for (j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
}
