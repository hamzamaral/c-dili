#include<stdio.h>
int main()
{
	char firstname[20],lastname[19];
	int one_year;
	printf("input you firstname: ");
	scanf("%s",&firstname);
	printf("input your lastname:");
	scanf("%s",&lastname);
	printf("input year of birth:");
	scanf("%d",&one_year);
	printf("%s %s %d",firstname,lastname,one_year);
	return 0;
}
