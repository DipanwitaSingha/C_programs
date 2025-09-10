#include<stdio.h>
int main()
{
	int matrix[3][3],i,j,n,sum;
	n=3;
	printf("Enter elements of 3X3 matrix :\n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{ 
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Matrix is:\n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d",matrix[i][j]);

		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
	
	sum=sum+matrix[i][i];}
	
	for (i=0;i<n;i++)
	{

	sum=sum+matrix[i][n-i-1];}
	
	printf("%d ",sum);
	return 0;
}
