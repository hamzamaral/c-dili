#include<stdio.h>
int main()
{
	int p=0,i,num;
	printf("input number:\n");
	scanf("%d",&num);
	 
	 for(i=1;i<=num;i++)
	 {
	 	if(num%i==0)
	 	{
	 		p++;
	
		 }
	 }
	 if(p==2)
	 {
	 printf("entered number is %d"\
	 "and it is a prime number.",num);
	 }

	 else{
	 	printf("enteres number is %d"\
		 "and it is not a prime number",num);
	 }
	 
}
