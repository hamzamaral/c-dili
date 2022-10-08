/* 10prg11.c 
Bir dizinin en büyük elemanýnýn fonksiyonla bulunmasý */ 
#include <stdio.h> 
/* n elemanlý bir dizinin enbüyük elemanýný gönderir */ 
int enBuyuk(int a[], int n) 
{ 
int k, en_buyuk_eleman; 
/* ilk eleman en büyük kabul ediliyor */ 
en_buyuk_eleman = a[0]; 
for(k=1; k<n; k++) 
if( a[k]>en_buyuk_eleman ) 
en_buyuk_eleman = a[k]; 
return en_buyuk_eleman; 
} 
int main() 
{ 
int a[10] = {100, -250, 400, 125 ,550, 900, 689, 450, 347, 700}; 
int eb; 
eb = enBuyuk(a[],10); 
printf("En buyuk eleman = %d\n",eb); 
return 0; 
} 

