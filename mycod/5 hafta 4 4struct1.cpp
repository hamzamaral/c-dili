// array of structure
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
	struct student s[3];
//	student 1
/*	s[0].id=1;
	strcpy(s[0].name,"cem");
	s[0].percentage=100;
	
	//student 2
	s[1].id=2;
	strcpy(s[1].name,"utku");
	s[1].percentage=98;
	
	//student 3
	s[2].id=3;
	strcpy(s[2].name,"busra");
	s[2].percentage=97;*/
	
	for(int i=0;i<3;i++)
	{
		printf("\nenter ID:");
		scanf("%d", &s[i].id);
	    printf("\nEnter Name:" );
	    scanf("%s", s[i].name);
	    printf("\nEnter Percentage:" );
		scanf("%f",&s[i].percentage );
	}
		
	
	for(int i=0;i<3;i++)
	{
		printf("\n\n record of student %d is:\n",i+1);
		printf("ID is= %d\n",s[i].id );
		printf("Name is= %s\n",s[i].name );
		printf("Percentage is= %f\n",s[i].percentage );
	}
	
	
}
