//5. Write a C program to calculate the factorial of a given number.
#include<stdio.h>
int main()
{
	int i,n,sum=1;
	printf("input a number:");
	scanf("%i",&n);
	printf("\n your number are:%d ",n);
	for(i=1;i<=n;i++)
	{
		printf("\n %d",i);
		sum=sum*i;
	}
	printf("\n sum= %d",sum);
}
