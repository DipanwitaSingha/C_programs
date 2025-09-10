#include<stdio.h>
int main()
 {
 int i,j,n,m,t,a,b,c,d;
	int[a]=1,2,3,4
	int[b]=5,7,6,9
	int[c]=10,12,11,13
    int[d]=16,17,19,20;
    n=sizeof(a)/sizeof(a[0]);

    for (i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
                printf("%d ", a[i][j]);
            else
                printf("  "); 
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if (a[i]<a[j])
		{ 
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		}
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}

