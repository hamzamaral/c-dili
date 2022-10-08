#include<stdio.h>
int main()
{
	int k ;
	int cpt;
	double value , mþþ;
	printf("inpu t the employees ID");
	scanf("%d", &k);
	printf ("\n ýnput the workýng hrs:");
	scanf("%d", &cpt);
	printf("\n input saatlýk ücret:");
	scanf("%lf", &mþþ);
	value=(mþþ*cpt);
	printf("\n value=%.2lf,ID=%s",value,k);
	
	
}
