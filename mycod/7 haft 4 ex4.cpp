//constant pointer

//const int * ptr; // sabit de?eri oldu?unu soyluyor
//int *const ptr;// sabit adress oldu?unu soyluyor
#include <stdio.h>
/*int main()
{
	const int a=10; //sabit de?er
	const int *ptr=&a; // s abit de?er
	*ptr=5;//wrong
	 ptr++;//right
	
	printf("a=%d", a);
	printf("\nadress=%p",ptr );
}
*/
int main()
{
    int a=10;
	int * const ptr=&a;
	*ptr=5;//right
	// ptr++; //wrong  adres sabit de?i?tirilemez 
	
	printf("a=%d", a);
	printf("\nadress=%p",ptr );
}
