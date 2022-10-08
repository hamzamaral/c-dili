#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("input number of  number:");
	scanf("%i",&n);
	printf("\n the odd number are:%d ",n);
	for(i=1;i<=n;i++)
	{
		printf("\n %d",i*i);
		sum+=i*i;
	}
	printf(" \nthe sum of natural number upto %d tersm:  %d\n" ,n,sum);
}
