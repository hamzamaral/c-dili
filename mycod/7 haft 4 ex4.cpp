//constant pointer

//const int * ptr; // sabit deðeri olduðunu soyluyor
//int *const ptr;// sabit adress olduðunu soyluyor
#include <stdio.h>
/*int main()
{
	const int a=10; //sabit deðer
	const int *ptr=&a; // s abit deðer
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
	// ptr++; //wrong  adres sabit deðiþtirilemez 
	
	printf("a=%d", a);
	printf("\nadress=%p",ptr );
}
