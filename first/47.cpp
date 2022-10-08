#include<stdio.h>
int main()
{
	int i,n,t,sum=0;
	printf("input two  number:");
	scanf("%i %i",&n,&t);
	printf("\n the odd number are:\n");
	for(i=t;i<=n;i++)
	{
		printf("%d",2*i-1);
		sum+=2*i-1;
	}
	printf("\n the sum of natural number upto %d tersm:  %d \n" ,n,sum);
}
