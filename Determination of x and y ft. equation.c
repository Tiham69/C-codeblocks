#include <stdio.h>
int main(){

    double a1, a2, b1, b2, c1, c2, x, y, f;

    printf("Enter the value of a1, b1, c1 =");
    scanf("%lf %lf %lf", &a1, &b1, &c1);

    printf("Enter the value of a2, b2, c2 =");
    scanf("%lf %lf %lf", &a2, &b2, &c2);

    f=(a1*b2-a2*b1);

    if((int)f==0){
        printf("The value of x and y can not be determined because of input ratio\n");
    }
    else{
    x=((b2*c1-b1*c2)/f);

    y=((a1*c2-a2*c1)/f);

    printf("x = %.2lf, y = %.2lf", x, y);
    }

return 0;
}
