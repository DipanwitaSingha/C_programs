#include<stdio.h>
int main()
{
	int i,j,n,k,c=1;
	printf("Enter the no of rows: ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(k=1;k<c;k++)
		{
			printf(" ");
		}
		for (j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		c++;
	}
	
	
	return 0;
	
	
}
