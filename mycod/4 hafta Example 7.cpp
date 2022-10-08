#include <stdio.h>
struct car
{
   	 char mark[10];
   	 char model[10];
   	 float price;
   		
}s;
int main()
{
 	//struct car s;
	 //={"tofas", "DofanL", 500}; 
    printf("enter information:\n");
    printf("Enter mark of car:");
    scanf("%s", &s.mark);
    printf("Enter model of car:");
    scanf("%s", &s.model);
    printf("Enter price of car:");
    scanf("%f", &s.price);
    
    printf("car mark is=%s",s.mark);
    printf("\ncar model is=%s",s.model);
    printf("\ncar price is=%.2f",s.price);
    
    
  
}
