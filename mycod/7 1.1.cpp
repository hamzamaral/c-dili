#include <stdio.h>
// int count; olaraak tanýmladýðýmýzda count'u global yapmiþ oluruz ve yanýna hiçbirþey yzýlmadýðýndan dolayý 0 ile eþleþir count =0 olur
int increment()
{
    //int var=3;
   int count=0;
	count=count+1;
	return count;
	/// sonuc 1 dir cunku increment her cagrýldýðýnda  count 0 olarak kabul edilir
	
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
