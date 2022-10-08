#include<stdio.h>

void dizi_yaz(float x[], int n); 

int main()
{ 
float kutle[5]= { 8.471, 3.683, 9.107, 4.739, 3.918 }; 

dizi_yaz(float kutle,int 5); 

return 0; 
} 
void dizi_yaz(float x[], int n) 

{ 
int i; 

for(i=0; i<n; i++) 

printf("%7.3f", x[i]); 

printf("\n"); 

} 

