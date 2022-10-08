#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	 printf("enter a nunber:");
	 for(i=0;i<10;i++)
	 {
	 	printf("your volue-%d",i++);
	 	scanf("%d",&arr[i]);
	
	 }
	 printf("\n");
	 for(i=0;i<10;i++);
	 {
	 	printf("%d",arr[i]);
	 }
}
