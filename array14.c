#include<stdio.h>
int main()
{
	int n,i,arr[6]={1,2,5,10,25,30};
	int sum=0,p=1;
	for(i=0;i<=5;i++)
	{
		if (arr[i]%2==0)
		sum=sum+arr[i];
		else
		p=p*arr[i];
	}
		printf("Addition:%d\n",sum);
		printf("Multiplication:%d\n",p);
	
	return 0;
}
