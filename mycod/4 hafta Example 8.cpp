
#include<stdio.h>
struct dob
{
	int day;
	int month;
	int year;
}d1;
struct student
{
	int id;
	char name[20];
	struct dob d1;
};
int main()
{
	struct student s1;
	printf("Enter information:\n");
	printf("\nenter student id:");
	scanf("%d", &s1.id);
	printf("\nenter student name:");
	scanf("%s", &s1.name);
	printf("\nenter student dob:");
	scanf("%d %d %d", &s1.d1.day,  &s1.d1.month, &s1.d1.year);
	//scanf("%d", &s1.d1.month);
	//scanf("%d", &s1.d1.year);
	
	
	printf("\nStudent id is=%d", s1.id);
	printf("\nStudent name is=%s", s1.name);
	printf("\nStudent dob is=%d.%d.%d",s1.d1.day,s1.d1.month,s1.d1.year );
	
	
}
