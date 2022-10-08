/* 10prg12.c 
Bir 3x3 bir matrisin izinin fonksiyonla bulunmasý */ 
#include <stdio.h> 
double iz(double a[][3], int); 
int main() 
{ 
double a[3][3], izA; 
int i,j; 
puts("matrisi girin:"); 
for(i=0; i<3; i++) 
for(j=0; j<3; j++) 
scanf("%lf",&a[i][j]); 
izA = iz(a,3); 
printf("matrisin izi = %lf\n",izA); 
return 0; 
} 
double iz(double a[][3], int n) 
{ 
int i; 
double toplam = 0.0; 
for(i=0; i<n; i++) 
toplam += a[i][i]; 
return toplam; 
} 


