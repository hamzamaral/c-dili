/* hesap.c: Komut satýrýndan girilen iki sayý üzerinde 5 iþlem yapar. 
Kullanýmý: hesap <sayi1> <operator> <sayi2> */ 
#include <stdio.h> 
#include <stdlib.h> 
int main(int args, char **argv) 
{ 
int s1, s2; 
float sonuc; 
char op; 
if(args != 4){ 
printf("Eksik veya fazla parametre !\n"); 
printf("Kullanimi: hesap <sayi1> <operator> <sayi2>\n"); 
return 1; 
} 
s1 = atoi(argv[1]); /* 1. parametre: sayi1 */ 
op = argv[2][0]; /* 2. parametrenin ilk karakteri: operator */ 
s2 = atoi(argv[3]); /* 3. parametre: sayi2 */ 
switch(op) 
{ 
case '+': 
sonuc = s1 + s2; break; 
case '-': 
sonuc = s1 - s2; break; 
case '*': 
sonuc = s1 * s2; break; 
case '/': 
sonuc = (float) s1 / s2; break; 
case '%': 
sonuc = s1 % s2; break; 
default: 
sonuc = 0.0; 
printf("Yanlis operator %c\n",op); 
printf("Operatorler: +, -, *, / veya %%\n");}
return 0; }

