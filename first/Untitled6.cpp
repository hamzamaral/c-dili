#include <stdio.h>

int main(int argc, const char * argv []) {
int s1 =0;
printf("Lutfen bir sayi giriniz:");
scanf("%d" , &s1);

switch (s1){
case 1:
    printf("Girilen sayi degeri: 1n");
    break;
case 2:
    printf("Girilen sayi degeri: 2n");
    break;
default:
    printf("Girilen sayi degeri gecersiz n");
    break;
        }
return 0;
}
