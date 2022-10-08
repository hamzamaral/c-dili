 #include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	int *p;
	
	
	p=(int *)malloc(sizeof(int));//p hendine heap'ta yer ayýrýr   ve o yerin adresini p'ye atar anlamýný verir
	*p=10;
	printf("Address=%p",p);
	printf("\nValue=%d",*p);
	free(p);//p' deðiþtireceðimden dolayý p nýn heapte eskiden kapladýðý yeri deðiþtirmem lazým
	p=(int *)malloc(20*sizeof(int));/*p icicne yeni bir deðer olusturuyorum artýk p'nýn heapta kapladýðý eski yeri siliyoruz tamammen
	 yeni bir adrese ve konuma sahip (20*)anlamý heap'ta kapladýðý alaný yerimi ile carmýyor demek*/
	*p=20;
	printf("\nAddress=%p",p);
	printf("\nValue=%d",*p);
}
