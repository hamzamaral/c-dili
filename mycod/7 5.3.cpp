// function call- 1)call by value 2)call by reference 3)call by address
#include <stdio.h>
void increment (int &a)
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
// refarans de?eri ile ?e??rd???m?zda a 'da yapt???m?z her bir de?i?iklik  x'i etkiler .ikiside ayn? adresi i?aret eder
