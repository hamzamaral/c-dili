#include<stdio.h>
#include <stdlib.h>
struct emp
{
	int eno;
	char name[20];
	float salary;
};

int main()
{
	struct emp *ptr;
	ptr= (struct emp *)malloc(sizeof(struct emp));
	if(ptr==NULL)
	{
		printf("out of memory");
	}
	else 
	{
		printf("Enter emplyee data:");
		scanf("%d %s %f", & ptr->eno,ptr->name ,&ptr->salary );
		printf("%d %s %f", ptr->eno,ptr->name ,ptr->salary);
	
		
	}
	
	
}
