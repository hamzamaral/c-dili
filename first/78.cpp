#include <stdio.h> 
double f(double); 
double turev( double (*)(double), double); 
int main() 
{ 
double x = 1.1; 
printf("Fonksiyon x = %lf deki degeri = %lf\n", x, f(x)); 
printf("Fonksiyon x = %lf deki turevi = %lf\n", x, turev(f, x) ); 
return 0; 
} 
// türevi hesaplanacak fonksiyon 
double f(double x){ 
return x*x*x - 2*x + 5.; 
} 
// sayýsal türev alan fonksiyon 
double turev( double (*fonk)(double x), double x){ 
double h = 28.0e-3; 
return (fonk(x+h)-fonk(x-h)) / (2*h); 
} 


