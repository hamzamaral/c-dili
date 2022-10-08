#include<stdio.h>
int main()
{
    int i,j,x,k;
    printf("\n Piramit icin satir sayisini giriniz : \n");
    scanf("%d",&x);
    for(i=1; i<=x; i=i+1)
            {
                printf("\n");
                for(j=1; j<=x-i; j=j+1)
               
                printf(" ");
                             
               
                for(k=1; k<=i+i-1; k=k+1)
                 printf("*"); }
               
                system("pause");
               
}
