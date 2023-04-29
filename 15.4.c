#include <stdio.h>
void main() {
int score,grade;
scanf("%d", &score);
grade=score/10;
switch(grade){
case 10:
case 9:
case 8:
    printf("You got a A+");
    break;
case 7:
    printf("You got a A");
    break;
case 6:
    printf("You got a -A");
    break;
case 5:
    printf("You got a B");
    break;
case 4:
    printf("You got a C");
    break;
default:
    printf("You failed");
    break;

}
}
