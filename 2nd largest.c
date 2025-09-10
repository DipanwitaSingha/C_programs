#include<stdio.h>
int main()
{
	int i,arr[]={600,170,90,200,80};
	int large1=arr[0];
	int large2=-1;
	int n=sizeof(arr)/sizeof(arr[0]);
	for (i = 0; i < n; i++) {
        if (arr[i] > large1) {
            large2 = large1;
            large1 = arr[i];
        } else if (arr[i] > large2 && arr[i] != large1) {
            large2 = arr[i];
        }
    }

	printf("2nd largest element is:%d",large2);


	
	
	
}
