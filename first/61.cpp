#include <stdio.h>
int primeornot(int);
int main()
{
	int n1,prime;
	printf("input a pozitf number:");
	scanf("%d",&n1);
	prime=primeornot(n1);
	if(prime==1)
	printf("the number %dis a prime number.\n",n1);
	else
	printf("the number %dis not a prime number.\n",n1);
	return 0;
	
	
}
int primeornot(int n1)
{
	int i=2;
	while(i<=n1/2)
	{
		if(n1%i==0)
		return 0;
		else
		i++;
		
	}
	return 1;
}
