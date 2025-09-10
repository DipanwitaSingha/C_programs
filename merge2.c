#include<stdio.h>
int main()
{
	int i,n,k=0,n1,n2,n3;
	int a[]={1,2,3};
	int b[]={4,5,6,7,8,9,10};
	n1=sizeof(a)/sizeof(a[0]);
	n2=sizeof(b)/sizeof(b[0]);
	n3=n1+n2;
	int c[n3];
	for (i=0;i<n1;i++)
	{
	c[i]=a[i];
	}
   for (i=n1;i<n3;i++)
   {
   	c[i]=b[k];
   	k++;
   }
   for (i=0;i<n3;i++)
   {
   
   printf("%d ",c[i]);
   }
   
}
