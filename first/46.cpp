#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("input number of  number:");
	scanf("%i",&n);
	printf("\n the odd number are:");
	for(i=1;i<=n;i++)
	{
		printf("%d",2*i-1);
		sum+=2*i-1;
	}
	printf(" \nthe sum of natural number upto %d tersm:  %d\n" ,n,sum);
}
