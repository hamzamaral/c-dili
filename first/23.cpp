//19 Write a C program to calculate the distance between the two points.
// Ýki nokta arasýndaki mesafeyi hesaplamak için bir C programý yazýn
#include<stdio.h>
#include<math.h>
int main()
{
	
	float x1,y1,x2,y2, gdistance;
	printf(" input value of  x1:");
	scanf("%f",&x1);
	printf(" input y1:");
	scanf("%f",&y1);
	printf(" input x2:");
	scanf("%f",&x2);
	printf(" input value of y2:");
	scanf("%f",&y1);
	gdistance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	printf("result= %f",sqrt(gdistance) );
	return 0;
}
