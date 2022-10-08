#include <stdio.h>
int main()
{
	int i,search_key,n;
	int freq=0;
	printf("enter size of array:");
	scanf("%d", &n);
	int arr[n];
	
	printf("Enter elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
		
	}
	
	printf("Enter the key:");
	scanf("%d",&search_key);
	
	for(i=0;i<n;i++){
		if(arr[i]==search_key)
		{
	      freq++;  		
		}
	}
	
   if(freq==0)
     printf("search elements is not in array.");
   else
    printf("search element occurs %d times.",freq) ; 

	
}
