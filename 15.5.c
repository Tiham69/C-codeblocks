#include <stdio.h>
void main(){
char a;
scanf("%c",&a);
switch(a){
case'a':
case'e':
case'i':
case'o':
case'u':
case'A':
case'E':
case'I':
case'O':
case'U':
    printf("Inputed character is vowel");
    break;
default:
    printf("Inputed character is consonant");
    break;
}
}
