#include<stdio.h>
int main()
{
	int hrs; /* saat de�erigir */
	int mnt;
	int tot_mnt;
	 printf ("input hrs:");
	 scanf("%d",&hrs);
	 printf("input mnt:");
	 scanf("%d",&mnt);
	 tot_mnt=hrs * 60 + mnt; 
	 printf("toplam  dakika de�eri is: %d",tot_mnt);
}
