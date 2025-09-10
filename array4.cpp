#include<stdio.h>
int main()
{
	int n,i,a[10];
	printf("enter the number of term:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<=2;i++)
	{

	if (a[i]%2==0)
		printf("%d is even number",a[i]);
	else
	printf("%dis odd number",a[i]);
}
return 0;   
	
}
