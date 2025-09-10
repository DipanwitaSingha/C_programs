#include<stdio.h>
int main()
{
	int a[4][4]={{1,3,2,4},{5,7,6,8},{9,11,10,12},{13,15,14,16}};
	int b[10];
	int k=0,i,j,m;
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			if(i==0||j==0||i==3||j==3)
			{
				printf(" ");
			}
			else
			{
				b[k]=a[i][j];
				k++;
			}
		}
	}
	printf("\n");
	for (i=0;i<k;i++)
	{
		printf("%d",b[i]);
	}
	printf("\n");
}
