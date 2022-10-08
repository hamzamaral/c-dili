#include <stdio.h>

int increment()
{
    //int var=3;
    static int count=3;//static fonksiyonu sayesinde count fonsiyonu her çagrýldýðýnda 3 baþlamaz daha önceki deðerinden baþlar 
	// ve count fonksiyonuna yerel bir özellik kazandýýr yaný value=count+1 deðeri yanlýþ olmasý nedeni budur
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
