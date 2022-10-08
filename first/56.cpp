#include<stdio.h>
int fib(int);
int main()
{
	int n,i;
	printf("eter a numer:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	printf("%d",fib(i));
	
}
int fib(int n)
{
	if(n==0) return 0;
	else if (n==0) return 1;
	else
	return(fib(n-1)+fib(n-2));
}
