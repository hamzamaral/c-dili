 #include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	int *p;
	
	
	p=(int *)malloc(sizeof(int));//p hendine heap'ta yer ay�r�r   ve o yerin adresini p'ye atar anlam�n� verir
	*p=10;
	printf("Address=%p",p);
	printf("\nValue=%d",*p);
	free(p);//p' de�i�tirece�imden dolay� p n�n heapte eskiden kaplad��� yeri de�i�tirmem laz�m
	p=(int *)malloc(20*sizeof(int));/*p icicne yeni bir de�er olusturuyorum art�k p'n�n heapta kaplad��� eski yeri siliyoruz tamammen
	 yeni bir adrese ve konuma sahip (20*)anlam� heap'ta kaplad��� alan� yerimi ile carm�yor demek*/
	*p=20;
	printf("\nAddress=%p",p);
	printf("\nValue=%d",*p);
}
