#include <stdio.h>
int main()
{
	int x=5;
	int *p=NULL; //same
	int *p=0;//same
	
	if(p){
		printf("%p", p);
	}
//---------------------------------
  int *p[5];// an array of 10 integer pointers  5 tane dizi  �eklinde pointer olacak
  
  
  
  int (*p)[10];// 10 nalelik dziye i�aret eder
	
	
}
