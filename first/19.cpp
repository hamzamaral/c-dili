//Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
#include<stdio.h>
int main()
{
	int sec,h,m,s;
	printf("input sec:");
	scanf("%d",&sec);
	h=sec/3600;
	m=(sec/60)%60;
	s= sec%60;
	printf("h=%d,m=%d,s=%d ",h,m,s);
	
}
