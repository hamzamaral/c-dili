#include<stdio.h>
int main()
{
	int high;
	printf("you input one number: ");
	scanf("%d",&high);
	 if (high<150)
	 {		 	printf("c?ce");
}

	 	 	else if((high>150)&&(high<165))
	 	{
	 		 	printf("aviable\n");
	
		 }
		 else if((high>=165)&&(high<195))
		 {
		 	printf("tall");
		 	
		 }
		 else
		 {
		 	printf("anormal\n");
		 }
	 
}
