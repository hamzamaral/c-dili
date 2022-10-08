#include<stdio.h>
int main()
{
	int x=5;
	int *p=&x;
	
	*p=6;
	int **q=&p;
	int ***r=&q;
	printf("%p\n", p); 
	printf("%d\n", *p);//6
	printf("%p\n", q);// q address
	printf("%p\n", *q);// p address
	printf("%d\n", *(*q));//6
	printf("%p\n", *r); //q address
    printf("%p\n", *(*r)); // p address
    printf("%d\n", *(*(*r)));//6

	***r=10;
	printf("x=%d\n", x);
	**q=*p+2;
		printf("x=%d\n", x);
	
}
