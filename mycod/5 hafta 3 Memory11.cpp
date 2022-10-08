#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,*arr;
	printf("Enter size of array:");
	scanf("%d", &n);
	arr=(int*)calloc(n,sizeof(int));
	
	if(arr=NULL)
       printf("No memory to allocate");
    else{
    	printf("Enter numbers\n");
        for(int i = 0; i < n; i++)
            scanf("%d",arr+i);
    	printf("Array elements are:");
    	for(int i=0; i<n;i++)
		{  printf("\n%d", *(arr+i));
		}
    	  
	}   
	
}
