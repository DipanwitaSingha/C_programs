#include<stdio.h>
int main()
{
	int b[10],i,n=5,arr[]={1,2,3,2,1},j=0,flag=0;
	for (i=n-1;i>=0;i--)
	
	{b[j]= arr[i];
	j++;}
	for (i=0;i<n;i++)
	printf("%d",b[i]);
	for(i=0;i<n;i++)
	{
		if (arr[i]!=b[i])
		{
			flag=1;
			break;
			
		}
	}
	if (flag==0)
	printf("Array is a palindrome");
	else
	printf("Array is not a palindrome");


	
}
