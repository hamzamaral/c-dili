// function and structure
//1. passing entire structure
#include <stdio.h>
struct student
{
	int id;
	char name[10];
};
void display(student);
int main()
{
	struct student s1;
	printf("Enter student id:");
	scanf("%d", &s1.id);
	printf("Enter student name:");
	scanf("%s", s1.name);
	
	display(s1);
	
}
void display(student e){
	printf("\nStudent id is=%d", e.id);
	printf("\nStudent name is=%s", e.name);
}
















