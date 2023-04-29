#include <stdio.h>
void main(){
    printf("Input value: ");
int a;
scanf("%d", &a);
if (a<=100 && a>=80)
    printf("Grade: A+");
else if (a<=79&&a>=71)
    printf("Grade: A");
else if(a<=70&&a>=60)
    printf("Grade: -A");
else if (a<=59&&a>=50)
    printf("Grade: B");
else if(a<=49&&a>=35)
    printf("Grade: C");
else if(a<=34&&a>=0){
    printf("Oh! Pack your bag to get kicked out of your home\n");
    printf("Congrats! you got an 'F'");
}
else
    printf("Take a brake and have a kitkat");
}
