//pointer of structure
#include <stdio.h>
#include <string.h>
struct student
{
	int id;
	char name[10];
	float percentage;
};
int main()
{
	
	 
	struct student x={1,"elham",98};
	struct student *p;
	p=&x;
	
	printf("\nID is= %d", p->id=23);
	printf("\nName is= %s", strcpy(p->name,"elham"));
	printf("\nPercentage is= %f", p->percentage=68);
	
	
	/*	printf("\nID is= %d",x.id );
	printf("\nName is= %s",x.name );
	printf("\nPercentage is= %f",x.percentage );*/
}
