//write into a file
#include<stdio.h>
#include <stdlib.h>
int main(){
	int num;
	FILE *fptr;
	
	fptr=fopen("E:\Hamza\programlama 2.txt", "w");
	if(fptr==NULL){
		printf("ERROR!");
		exit(0);
		
	}
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	fprintf(fptr,"%d", num);
	fclose(fptr);
}
