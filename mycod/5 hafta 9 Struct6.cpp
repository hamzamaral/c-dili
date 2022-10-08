// function and structure
//1. passing entire structure
#include <stdio.h>
struct student
{
	int id;
	char name[10];
};
void display(student *ptr);
int main()
{
	struct student s1;
	printf("Enter student id:");
	scanf("%d", &s1.id);
	printf("Enter student name:");
	scanf("%s", s1.name);
	
	display(&s1);//adres gönderdiğim için & ekliyorum
	
}
void display(student *ptr){
	printf("\nStudent id is=%d", ptr->id);
	printf("\nStudent name is=%s", ptr->name);
}
















