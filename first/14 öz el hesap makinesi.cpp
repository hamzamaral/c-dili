#include<stdio.h>
int main()
{
	int num1,num2;
	int top,ckrt,crp;
	float blm;
	 printf ("baba iki tane say? gir:");
	 scanf("%d,%d",&num1,&num2);
	 
	  top=num1+num2;
	  ckrt=num1-num2;
	  crp=num1*num2;
	  blm=num1/num2;
	  
	  printf("line1_ toplama: %d\n",top);
	  printf("line2_ c?karma :%d\n",ckrt);
	  printf("line3_ par?alama: %d\n",crp);
	  printf("line4_ bolme %f\n",blm);
}

