#include<stdio.h>
double square( double num)
{
return(num*num)	;
}
int main()
{
	double n;
    int k;
	
	printf("input any ");
	scanf("%d",&k);
	n=square(k);
	printf("the square %d is : %.2f\n",k,n);
	return 0;
	
}
