#include<stdio.h>
int main()
{
	int a[10][10],j,i;
	
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int min=a[0][0];
	int max=a[0][0];
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			if (a[i][j]<min)
		    min=a[i][j];
		if (a[i][j]>max)
			max=a[i][j];
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	printf("Minimum element:%d\n",min);
	printf("Maximum element:%d\n",max);
}
