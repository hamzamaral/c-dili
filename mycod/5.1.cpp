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
	struct student s[0];
	s.[0].id=1;
	strcpy(s.[0].name,"cem");//s.[0].name="cem" deðerine eiþttir,,,strcpy stringe özel bir fonksiyondur
	s.[0].percentage=100;
	

	
		printf("\n\nrrecord of studen t %d is :\n",i);
		printf("ýd is%d\n ",s[0].id);
		printf("name is %s\n",s[0].name);
		printf("percentage is %f\n",s[0].percentage);
}

