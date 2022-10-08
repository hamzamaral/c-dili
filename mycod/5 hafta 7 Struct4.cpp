// function and structure
//1. passing individual member
#include <stdio.h>
struct student
{
	int id;
	char name[10];
};
void display(int a, char b[]);
int main()
{
	struct student s1;
	printf("Enter student id:");
	scanf("%d", &s1.id);
	printf("Enter student name:");
	scanf("%s", s1.name);//dizi olduðu için & gerek yok
	
	display(s1.id,s1.name);
	
}
void display(int a, char b[]){
	printf("\nStudent id is=%d", a);
	printf("\nStudent name is=%s", b);
}
















