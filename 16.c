#include <stdio.h>
void main(){

int cho;

printf("1 -> F to C\n");
printf("2 -> C to F\n");
printf("3 -> C to K\n");
printf("4 -> F to K\n");
printf("5 -> K to C\n");
printf("6 -> K to F\n");
printf("Enter your choice: ");
scanf("%d", &cho);

float c,f,k, cf, fc, ck;

switch(cho)
{
case 1:
    printf("Enter your value in Fahrenheit: \n");
    scanf("%f", &f);
    cf=(5*f-5*32)/9;
    printf("Fahrenheit to Celsius %.2f", cf);
    break;
case 2:
    printf("Enter your value in Celsius: \n");
    scanf("%f", &c);
    fc=(9*c/5)+32;
    printf("Celsius to Fahrenheit %.2f", fc);
    break;
case 3:
        printf("Enter value in Celsius: \n");
        scanf("%f", &c);
        ck=c+273;
        printf("Celsius to Kelvin %.2f", ck);
        break;
case 4:
        printf("Enter value in Fahrenheit:");
        scanf("%f", &f);
        ck=(5*(f-32)/9)+273;
        printf("Fahrenheit to Kelvin %.2f", ck);
        break;
case 5:
        printf("Enter value in Kelvin:");
        scanf("%f", &k);
        ck=5*(k-273)/9;
        printf("Kelvin to Fahrenheit %.2f", ck);
        break;
case 6:
        printf("Enter value in Kelvin: ");
        scanf("%f", &k);
        ck=(9*(k-273)/5)+32;
        printf("Kelvin to Celsius %.2f", ck);
        break;
default:
        break;
}
}
