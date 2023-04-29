#include <stdio.h>
void main(){

int a, b, sum1, sum2, sum3, sum4;

printf("Enter the value of a:");
scanf("%d", &a);
printf("Enter the value of b:");
scanf("%d", &b);

sum1=a+b;
sum2=a-b;
sum3=a*b;
sum4=a/b;

printf("%d\n", sum1);
printf("%d\n", sum2);
printf("%d\n", sum3);
printf("%d\n", sum4);
}
