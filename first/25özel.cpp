#include<stdio.h>
int main()
{
	int s, k, giri�;
	int y�ld�z , bo�luk;
	printf("Giri�:");
	scanf("%d",&giri�);
	y�ld�z=1;
	bo�luk=giri�-1;
	for(k=0;k<giri�;k++){
		printf(" ");
		
	}
	for(s=0;s<y�ld�z;s++)
{
	printf("*");

}
printf("\n");
bo�luk--;
y�ld�z +=2;
}
y�ld�z-=2;
bo�luk=0;
for(k=0;k<giri�;k++)
{
	for(s=0;<bo�luk;s++)
	{
		printf(" ");
	}
	for(s=0;s<y�ld�z;s++){
		printf("*");
		
	}
	printf("\n");
	bo�luk++;
	y�ld�z-=2
	
}
