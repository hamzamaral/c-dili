#include<stdio.h>
int main()
{
	int x=6;
	int y=4;
	int *p1,*p2;
	p1=&x;
	p2=&y;
	
	printf("\n %p", p2-p1);// yanli? de?il ama anlams?zzd?r
	printf("\n%p", p1--);//yanl?? de?il anlams?zd?r dizi olmu? olsayd? anlaml? olurdu
//	printf("%p", p2+p1);//false iki diziyi c?kaarabiliriz ama toplayamay?z cunku topluyunca nereye gidece?ini bilemeyiz
	printf("\n %d", *p2+*p1);
//	printf("\n %p", p2*p1); yanl??
	printf("\n %d", (*p2) /(*p1));


	
}
