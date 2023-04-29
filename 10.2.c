#include <conio.h>
#include <stdio.h>
void main(){
char a;
scanf("%c", &a);
a>='A'&&a<='Z'||a>='a'&&a<='z'?
printf("Input is a valid character"):
printf("Input is not a valid character");
}
