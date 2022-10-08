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
// refarans deðeri ile çeðýrdýðýmýzda a 'da yaptýðýmýz her bir deðiþiklik  x'i etkiler .ikiside ayný adresi iþaret eder
