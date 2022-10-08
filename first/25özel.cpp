#include<stdio.h>
int main()
{
	int s, k, giriþ;
	int yýldýz , boþluk;
	printf("Giriþ:");
	scanf("%d",&giriþ);
	yýldýz=1;
	boþluk=giriþ-1;
	for(k=0;k<giriþ;k++){
		printf(" ");
		
	}
	for(s=0;s<yýldýz;s++)
{
	printf("*");

}
printf("\n");
boþluk--;
yýldýz +=2;
}
yýldýz-=2;
boþluk=0;
for(k=0;k<giriþ;k++)
{
	for(s=0;<boþluk;s++)
	{
		printf(" ");
	}
	for(s=0;s<yýldýz;s++){
		printf("*");
		
	}
	printf("\n");
	boþluk++;
	yýldýz-=2
	
}
