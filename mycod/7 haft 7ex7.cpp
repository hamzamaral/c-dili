// bir diziyi nas�l geri d�nd�rebilirim
#include <stdio.h>
int* display(int m[5])
{ 
   m[0]=99;
   m[1]=100;
   m[2]=87;
	
  return m;	
  //  dizinin  ilk elam�n�n adresine e�ttir yan� dizinin ilk elan�n�n� geri  d�nd�r�r
}

int main()
{
	int marks[5];
	int *p=display(marks);//&marks[0] // dizinin 1 elan�n�n adresi geri d�nd�r�l�r  
	
  printf("dispaly marks:");
  for(int i=0; i<5;i++)
   printf("\nstudent %d: %d", i+1, *(p+i));
}
