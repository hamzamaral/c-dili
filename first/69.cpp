	/* topla.c 
Komut satýrýndan girilen iki sayýnýn toplamýný hesaplar. 
Kullanýmý: topla sayý1 sayý2 */ 
#include <stdio.h> 

#include <stdlib.h> 

int main(int argsay, char *argvek[])
{ 
int toplam;
 
if(argsay < 3){ 
printf("Eksik parametre jhjhl!\n"); 

exit(1); 

} 
if(argsay > 3){ 
printf("Cok fazla parametre !\n"); 

exit(1); 

} 
toplam = atoi(argvek[1]) + atoi(argvek[2]); 

printf("Toplamlari %d\n",toplam); 

return 0; 
} 

