#include <stdio.h>
// int count; olaraak tan�mlad���m�zda count'u global yapmi� oluruz ve yan�na hi�bir�ey yz�lmad���ndan dolay� 0 ile e�le�ir count =0 olur
int increment()
{
    //int var=3;
   int count=0;
	count=count+1;
	return count;
	/// sonuc 1 dir cunku increment her cagr�ld���nda  count 0 olarak kabul edilir
	
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
