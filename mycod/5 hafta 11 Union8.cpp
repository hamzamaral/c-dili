#include <stdio.h>
union abc{
	int a;
	char b;
};

int main()
{ 
  union abc var;
  var.a=65;
  //onionda int a ve char b ayný yeri iþaret ettiðinden dolayý a 65 gösterdiðinde  char  65'in sayýsal karþýlýðý olan 'a' gösterir
  printf("%d ", var.a);
  printf("%c", var.b);
	
}
