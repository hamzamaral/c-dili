#include<stdio.h>
int main()
{
	int ang1,ang2,ang3; // angle of ücgen
	printf (" input two angles of triangle sparated by coma: ");
	scanf("%d,%d",&ang1,&ang2);
	ang3 = 180 - (ang1+ang2);
	printf("ang3=%d",ang3);
	
}
