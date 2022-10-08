#include<stdio.h>
int amq(int n1)
{
	if (n1%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n1;
	printf("input any number:");
	scanf("%d",&n1);
	if(amq(n1))
	{
		printf("the entered number is even.\n");
		
	}
	else
	{
		printf("the entered number is odd.\n");
		
	}
	return 0;
}
