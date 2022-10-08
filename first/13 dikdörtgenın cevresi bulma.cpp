#include<stdio.h>
int main()
{
	float a; /*radius of the sphere*/
	float b,c;
	printf ("uzun kenarý gir  a:");
	scanf("%f",&a);
	printf("kýsa kenarý gir b");
	scanf("%f",&b);
	c=2.0 * (a+b);
	printf("cevre toplamý is %f",c);
}
