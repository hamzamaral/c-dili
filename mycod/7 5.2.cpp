// function call- 1)call by value 2)call by reference 3)call by address
#include <stdio.h>
void increment (int a)
{
	//a++;
	a++;
    printf("value of function increment:%d", a);
}
int main()
{
	int x=5;
	increment(x);
	printf("\nvalue of function main:%d", x);
}
// int a va int x'in adresleri farkl�d�r 
//sadece ilk ba�da  x de�erini a'ya kopyalar
