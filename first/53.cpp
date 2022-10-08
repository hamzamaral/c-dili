#include<stdio.h>
int main()
{
	int i,n,a[100];
	printf("input the number of elements to in the array:");
	scanf("%d",&n);
	
	printf("input %d number of elements in the array:\n",n);
	for(i=0;i<n;i++)
	{
		printf("element-%d:",i);
		scanf("%d",&a[i]);
	}
	printf("\n the value store ito the array are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n th value store into arry in reverse are:\n");
	for(i=n-1;i>=0;i--)
	{
	printf("\n%d",a[i]);
	}
}
