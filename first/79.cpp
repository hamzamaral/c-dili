#include <stdio.h> 
double f(double); 
int main() 
{ 
double x = 1.1; 
printf("Fonksiyon x = %lf deki degeri = %lf\n", x, f(x)); 
return 0; 
} 
// türevi hesaplanacak fonksiyon 
double f(double x){ 
return x*x*x - 2*x + 5.; 
} 

