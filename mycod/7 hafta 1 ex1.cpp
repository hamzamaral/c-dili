#include <stdio.h>

int increment()
{
    //int var=3;
    static int count=3;//static fonksiyonu sayesinde count fonsiyonu her ?agr?ld???nda 3 ba?lamaz daha ?nceki de?erinden ba?lar 
	// ve count fonksiyonuna yerel bir ?zellik kazand??r yan? value=count+1 de?eri yanl?? olmas? nedeni budur
	count=count+1;
	return count;
	
}
int main()
{
	int value;
	value=increment();
	value=increment();
	value=increment();
	//value=count+1;
	printf("%d", value);
}
