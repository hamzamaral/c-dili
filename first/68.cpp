#include<stdio.h>
#define max_size 100
int main()
{
	int arr[max_size];
	int n,i;
	int *ptr=arr;
	
	printf("enter size of array:");
	scanf("%d",&n);
	
	printf("enter elements in array:\n");
	
	for(i=0;i<n;i++){
		scanf("%d",(ptr+i));
	}
	
	printf("array elements:");
	
	for(i=0;i<n;i++){
		printf("%d",*(ptr+i));
	}
	
}
