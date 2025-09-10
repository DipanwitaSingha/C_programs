#include<stdio.h>
int main()
{
	int i,n,arr[]={1,2,3,4,5,6,7,8,9,10},j=0,k=0;
	int odd[10],even[10];
	n=10;
	for (i=0;i<n;i++)
	{
		if (arr[i]%2==0)
		{even[j]=arr[i];
		j++;
		}
	else 
	{odd[k]=arr[i];
	k++;
	}
}
for (i=0;i<j;i++)
printf("%d",even[i]);
printf("\n");
for (i=0;i<k;i++)
printf("%d",odd[i]);
}
