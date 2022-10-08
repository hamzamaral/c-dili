#include<stdio.h>
int main()
{
	int num[3][4]={
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12}};
	
	int r=3, c=4,t,i,j;
	t=r*c;
	
	int *ptr=&num[0][0];
	
	//printf("%d\n", *(*(num+1)+1));
//	printf("%d\n", *(*(num+2)+3));
	//printf("%d\n", *(*(num+2)));
	
   /*for(i=0;i<t;i++)
    printf("%d\t", *(ptr+i));*/ 
                                    /* DİKKAT!	num'da iki yıldız 
                                 	ptrde tek yıldız kullanıldığına dikkat et */
	
    for(i=0;i<r;i++){
    	for(j=0;j<c;j++)
    	{  printf("arr[%d][%d]=%d\n",i,j, *(*(num+i)+j) ) ;// *(*(num+0)+1)
		}
		printf("\n\n");
	}
}
	
	
