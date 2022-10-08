#include<stdio.h>
int main()
{ 

int arr1[100];
int i,mx,mn,n;
printf("input the number of elements to be stored in the array:");
scanf("%d",&n);
printf("input %d elemets in the array:\n",n);
for(i=0;i<n;i++)
{
	printf("element-%d:",i);
scanf("%d",&arr1[i]);
}
mx=arr1[0];
mn=arr1[0];
for(i=1;i<n;i++)
{
	if(arr1[i]>mx)
	{
		mx=arr1[i];
		
	}
	if(arr1[i]<mn)
	{
		mn=arr1[i];
	}
	
	
}
printf("maximum element is:%d\n",mx);
	printf("minimum elemet is : %d\n\n",mn);
}
