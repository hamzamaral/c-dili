#include<stdio.h>
int main()
{
	float myradius; /*radius of the sphere*/
	float myvalume,p=3.14;
	printf ("input the radius of the sphere :");
	scanf("%f",&myradius);
	myvalume= (4.0/3.0)* p *(myradius*myradius*myradius);
	printf("myvalume is %f",myvalume);
}
