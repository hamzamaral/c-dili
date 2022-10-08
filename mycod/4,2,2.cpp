#include<stdio.h>
int main()
{
	int x=6;
	int y=4;
	int *p1,*p2;
	p1=&x;
	p2=&y;
	
	printf("\n %p", p2-p1);// yanliþ deðil ama anlamsýzzdýr
	printf("\n%p", p1--);//yanlýþ deðil anlamsýzdýr dizi olmuþ olsaydý anlamlý olurdu
//	printf("%p", p2+p1);//false iki diziyi cýkaarabiliriz ama toplayamayýz cunku topluyunca nereye gideceðini bilemeyiz
	printf("\n %d", *p2+*p1);
//	printf("\n %p", p2*p1); yanlýþ
	printf("\n %d", (*p2) /(*p1));


	
}
