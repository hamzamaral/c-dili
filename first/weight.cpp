//Write a C program that accepts two item s weight and the number of the purchase and calculates the average value of the items.
#include<stdio.h>
int main()
{
	double wi1,wi2,ci1,ci2 ,result;
	printf("\n wi1 agýrlýðýný gir:");
	scanf("%lf",&wi1);
	printf("\n wi2 aðýrlýðýný gir");
	scanf("%lf",&wi2);
	printf("\n ci1:");
	scanf("%lf",&ci1);
	printf("\n ci2");
	scanf("%lf",&ci2);
	result = ((wi1*ci1)+(wi2*ci2)) /(ci1+ci2);
	printf("ort=%4.lf\n",result);
	return 0;
	
}
