#include<stdio.h>
int main()
{
	float a; /*radius of the sphere*/
	float b,c;
	printf ("uzun kenar� gir  a:");
	scanf("%f",&a);
	printf("k�sa kenar� gir b");
	scanf("%f",&b);
	c=2.0 * (a+b);
	printf("cevre toplam� is %f",c);
}
