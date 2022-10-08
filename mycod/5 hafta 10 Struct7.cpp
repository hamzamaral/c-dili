// return structure from a function
#include <stdio.h>
struct student
{
	int id;
	char name[10];
};
student getdata(student)
void display(student);
int main()
{
	struct student s1;
    s1=getdata(s1)
	display(s1);
	
}
student getdata(student p)
{
   	printf("Enter student id:");
	scanf("%d", &p.id);
	printf("Enter student name:");
	scanf("%s", p.name);
	return (p);	
}
void display(student e){
	printf("\nStudent id is=%d", e.id);
	printf("\nStudent name is=%s", e.name);
}

