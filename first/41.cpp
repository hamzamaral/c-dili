#include<stdio.h>
int main()

{
	int a,b,c,max;
	printf("you input three number: ");
	scanf("%d%d%d",&a,&b,&c);
	 if (a<b)
	 {
	 	if(c<b)
	 	{
	 		max = b;
		 }
		 else
		 {
		 	max = c;
		 } 
	 }
	 else
	 {
	 	if(c<a)
	 	{
	 		max = a;
		 }
		 else
		 {
		 	max = c;
		 }
	 }
	 printf("best number value :%d",max);
}
