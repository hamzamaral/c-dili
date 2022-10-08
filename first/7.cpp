//hamza;
#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,ans=0;
	char sign;
	printf("enter number 1 :");
	scanf("%d",&num1);
	printf("enter sign:");
	scanf ("%c",&sign);
	printf("enter number 2 :");
	scanf("%d",&num2);
	switch ( sign){
case '+':
ans = num1 + num2;
break;
case '-':
ans = num1 - num2;
break;
case '*':
ans = num1 * num2;
break;
case '/':
ans = num1 / num2;
break;
default:
printf("Error");
}
 printf("ans=%d",ans);
 getch();
	
}//end main
