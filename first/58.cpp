#include<stdio.h>
int main()
{
	int i,a[100],n;
	printf("input the number of elemets to store in the array: ");
	scanf("%d",&n);
	
	printf("input %d number of elemets in the array:\n",n);
	for(i=0;i<n;i++)
	{
		printf("elements-%d:",i);
		scanf("%d",&a[i]);
		}	
		printf("\nthe value store into array are:\n");
		for(i=0;i<n;i++)
		{printf(" =%d",a[i]);
		
		
			}
			printf("\nthe value tore into the array in reverse are:\n");
			for(i=n-1;i>=0;i--)
			{
				printf("\n%d",a[i]);
			}
}
