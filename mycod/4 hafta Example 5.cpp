#include <stdio.h>
int main()
{
	int *p;// pointer to int
	int (*parr)[5]; //pointer to an array of 5 integer 5 haneli bir dizinin tamamına işaret eder anlamındadır
	
	int a[5];
	
	
	p=a; //1000
	parr=&a; //1000
	
	printf("address of p=%p\n", p);
	printf("address of parr=%p\n", parr);
	
	p++;
	parr++;
	
	printf("address of p=%p\n", p);//1004
	printf("address of parr=%p\n", parr);//1020 5 haneli bir blok olarak düşünmeliyiz. 5*4=20 olduğu unutulmamalı
	
}
