 #include <stdio.h>
int main()
{
 char *ptr="hello"; // string literal
 char p[6]="hello"; //string variable
 
 printf("%c", "hello"[1]);
 printf("\n%c", *(ptr+1));
}
