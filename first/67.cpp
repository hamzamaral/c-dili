#include <stdio.h>
int main()
{
	int a,b,tmp,*aptr,*bptr;
	printf("babo enter thne value of a and b:");
	scanf("%d %d",&a,&b);
	aptr=&a;
	bptr=&b;
	
	tmp=*aptr;
	*aptr=*bptr;
	*bptr=tmp;
	
	printf("the swap numbers are:%d %d",*aptr,*bptr);
}

