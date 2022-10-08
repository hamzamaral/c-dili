#include <stdio.h>
int main()
{
	int i,n, min,max;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	
	printf("Enter elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	max=arr[0];
	
	for(i=1;i<n;i++){
	   	if(arr[i]<min)
	   	 min=arr[i];
	   	if(arr[i]>max)
		   max=arr[i]; 
	}
	
	printf("smallest element: %d", min);
	printf("largest element: %d", max);
	
	
}
