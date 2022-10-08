#include <stdio.h>
int main()
{

	int (*p)[5]; //pointer to an array of 5 integer .. 5 haneyi  bütün olarak görüyor
	
	int a[5]={1,2,3,4,5};
	
	p=&a;
	printf("%d", **p+1);
}
