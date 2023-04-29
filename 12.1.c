#include <stdio.h>
void main(){
printf("Input a time: ");
float a;
scanf("%f",&a);
if (a<=7.59&&a>=5.00)
    printf("Early Morning");
else if (a<=10.59&&a>=8.00)
printf("Morning");
else if (a<=12.59&&a>=11.00)
printf("Before Noon");
else if (a<=15.59&& a>=13.00)
printf("Noon");
else if (a<=17.59 && a>=16.00)
    printf("Afternoon");
else if (a<=19.59 && a>=18.00)
printf("Evening");
else if (a<=23.59 && a>=20.00)
    printf("Night");
else if (a<=4.59&& a>=1.00)
    printf("Mid-Night");
else
    printf("It goes past the standard mark");
}
