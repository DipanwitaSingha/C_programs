#include <stdio.h>

int* func(int a[],int n,int* count){
  	
  	// Creating static array
  	static int arr[10];
  	int j =0,i;
for (i=0;i<n;i++)
  {
  if(a[i]%5==0)
  {
  
  arr[j]=a[i];
  j++;}
}
*count=j;// Returning multiple values using static array
  	return arr;
}
int main() {
  
     int a[]={10,2,3,40,5,50};
     int n=sizeof(a)/sizeof(a[0]);
     int count=0,i;
     int*arr=func(a,n,&count);
     for(i=0;i<count;i++){
     	printf("%d ",arr[i]);
	 }
	 return 0;
}
