#include<stdio.h>
int main()
{
	float temp_f;  /* degrees fahrenheit */
	float temp_c;  /* defrees cantigrade  */
	printf (" input a temperature (in centigrade)");
	scanf("%f",&temp_c);
	temp_f=((9.0/5.0)*temp_c)+32.0;
	printf("%fdegrees fahrenheit ./n",temp_f);
	
	
	}
