#include<stdio.h>
void merge(int p[],int n1,int m[],int n2,int c[],int n3)

{
	int i,k=0,a,b;
for (i=0;i<n1;i++)
{
	c[i]=p[i];
}
   for (i=n1;i<n3;i++)
{
   	c[i]=m[k];
   	k++;
}
}
void print(int c[],int n)
{ int i;
	for(i=0;i<n;i++)
	printf("%d ",c[i]);
}
int main()
{
int p[]={4,53,14,8,85};
int m[]={39,0,23,9,1};
int  n1=sizeof(p)/sizeof(p[0]);
int  n2=sizeof(m)/sizeof(m[0]);
int  n3=n1+n2;
int c[n3];
merge(p,n1,m,n2,c,n3);
print(c,n3);
return 0;
}


