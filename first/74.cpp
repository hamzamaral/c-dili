/* 06prg06.c: switch-case yapýsý */ 
#include <stdio.h> 
#include <stdlib.h> 
int main(void) 
{ 
int secim; 
float x,y, sonuc; 
printf("Iki sayi girin: "); 
scanf("%f %f",&x,&y); 
puts("*** Menu ***"); 
puts("[1] Toplama"); 
puts("[2] Cikarma"); 
puts("[3] Carpma"); 
puts("[4] Bolme"); 
printf("Seciminiz: "); 
scanf("%d",&secim); 
switch( secim ) 
{ 
case 1: 
sonuc = x + y; 
printf("Toplam = %f\n",sonuc); 
break; 
case 2: 
sonuc = x-y; 
printf("Fark = %f\n",sonuc); 
break; 
case 3: 
sonuc = x * y; 
printf("Carpim = %f\n",sonuc); 
break; 
case 4: 
sonuc = x/y; 
printf("Oran = %f\n",sonuc); 
break; 
default: 
printf("hatalý seçim"); 

//puts("Yanlis secim !\a"); 
} 
return 0; 
} 

