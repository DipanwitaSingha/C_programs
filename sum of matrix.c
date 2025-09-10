#include<stdio.h>
int main()
{
	int a[2][2] = { { 0, 1 }, { 2, 3 }},b[2][2]={{6 , 7},{8 , 9}};
	int sum[2][2],i,j;
	for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
        	sum[i][j]=a[i][j]+b[i][j];
            
        }
    
    }
    for (i=0;i<2;i++)
	{
		
		for (j=0;j<2;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	

    return 0;
}



