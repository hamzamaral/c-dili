#include <stdio.h>
void minMax(int a[],int len,int *min,int *max);
int main()
{
  int a[]={23,4,21,98,987,45,32,10,123,986,50,3,4,5};
  int min,max;
  int len=sizeof(a)/sizeof(a[0]);
  minMax(a,len,&min,&max);
  printf("min:%d and max:%d",min,max );
  
}
void minMax(int a[],int len,int *min,int *max)
{
	*min=a[0];
	*max=a[0];
	
	int i;
	for(i=1;i<len;i++){
		if(a[i]>*max)
		 *max=a[i];
		if(a[i]<*min)
		 *min=a[i]; 
	}
	
}

