#include<stdio.h>
int main()
{
	int min,max,i,a[10],n;
	printf("enter the number of term:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
		if(max<a[i])
		max=a[i];
    }
    printf("min is %d\n",min);
    printf("max is %d",max);
}
