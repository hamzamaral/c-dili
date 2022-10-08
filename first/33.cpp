

#include <stdio.h>

int main(){
	int s,k,g;
	int y,b;
	char ch='A';
	printf("giriþ:");
	scanf("%d",&g);
	
	y=1;
	b=g -1;
	
	for(k=0;k<g;k++){
		for(s=0;s<b;s++){
		printf(" ");
		}
		for(s=0;s<y;s++){
			printf("%c",ch++);	
		}
		printf("\n");
		b--;
		y +=2;
	}
}
