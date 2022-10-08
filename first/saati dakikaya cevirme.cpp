#include<stdio.h>
int main()
{
	int hrs; /* saat deðerigir */
	int mnt;
	int tot_mnt;
	 printf ("input hrs:");
	 scanf("%d",&hrs);
	 printf("input mnt:");
	 scanf("%d",&mnt);
	 tot_mnt=hrs * 60 + mnt; 
	 printf("toplam  dakika deðeri is: %d",tot_mnt);
}
