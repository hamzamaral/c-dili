
#include <stdio.h>
void display(int *m)//*m yerine m[5] kullan�labilir
{ 
  printf("dispaly marks:");
  for(int i=0; i<5;i++)
   printf("\nstudent %d: %d", i+1, m[i]);
	
}

int main()
{
	int marks[5]={88,76,90,5,61};
	display(marks);//&marks[0]         //marks bir dizi oldu�unda dolay�  marks =&marks[0] oldu�u unutulmamal�d�r.
	
}
//