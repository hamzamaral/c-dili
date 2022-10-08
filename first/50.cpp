#include <stdio.h>
int main()
{ 
int prv=0,pre=1,trm,i,n;
printf("input number of terms to display:");
scanf("%d",&n);
printf("here is fibonacci deries upto %d terms :\n",n);
printf("\n%7d\n%7d",prv,pre);

for(i=3;i<=n;i++)
{
	trm=prv+pre;
	printf("\n%7d",trm);
	prv=pre;
	pre=trm;
	
}
}
