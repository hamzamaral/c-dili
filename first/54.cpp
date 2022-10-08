#include<stdio.h>
int main()
{
	int arr1[100],arr2[100];
	int i,n;
	printf("input the number of elements to be stored in the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("element-%d:",i);
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		arr2[i]=arr1[i];
		
	}
	printf("\n the elements stored in the first array are :\n");
	for(i=0;i<n;i++)
	{
		printf("\n arr2[i]=%d",arr1[i]);
		
	}
	printf("\n the elements copied ito the second array are :\n");
	for(i=0;i<n;i++)
	{
		printf("\n arr2[i]=%d",arr2[i]);
		
	}
}
