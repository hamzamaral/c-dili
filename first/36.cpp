#include<stdio.h>
#include <stdlib.h>

int main()
{
	printf("my name is hamza maral\n");
	int hmz=65;
	int i,j,t,l;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		printf(" ");
		
		for(t=1;t<=i;t++)
		printf("%c",hmz++);
		hmz--;
		for(l=1;l<i;l++)
		printf("%c",--hmz);
		printf("\n");
		hmz=65;
	}
}
