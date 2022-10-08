#include <stdio.h>
int main ()
{
	int arr1[10],arr2[10],arr3[10];
	int i,j=0,k=0,n;
	printf("input the number of elements to :");
	scanf("%d",&n);
	
	printf("input:\n",n);
	for(i=0;i<n;i++);
	{
		printf("elemets- %d :",i);
		scanf("%d",&arr1[i]);
		
	}
	for(i=0;i<n;i++)
	{
		if (arr1[i]%2 == 0 )
		{
		 arr2[j]=arr1[i];
		 j++;
		}
		else
		{
			arr3[k]=arr1[i];
			k++;
		}
	}
	printf("\n the even elements are : ");
	for(i=0;i<j;i++)
	{
		printf("%d",arr2[i]);
		
	}
	printf("\n the odd elentsare :");
	for(i=0;i<k;i++){
		printf("%d",arr3[i]);
	}
}
