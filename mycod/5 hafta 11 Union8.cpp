#include <stdio.h>
union abc{
	int a;
	char b;
};

int main()
{ 
  union abc var;
  var.a=65;
  //onionda int a ve char b ayn� yeri i�aret etti�inden dolay� a 65 g�sterdi�inde  char  65'in say�sal kar��l��� olan 'a' g�sterir
  printf("%d ", var.a);
  printf("%c", var.b);
	
}
