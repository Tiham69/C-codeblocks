#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, sqa, sqb, sqc;

    scanf("%lf %lf %lf", &a, &b, &c);

    // Sort the sides in decreasing order
    if (a < b) {
        double temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        double temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        double temp = b;
        b = c;
        c = temp;
    }

    sqa = pow(a, 2);
    sqb = pow(b, 2);
    sqc = pow(c, 2);

    // Check if the triangle exists
    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        // Check for the other five cases
        if (sqa == sqb + sqc) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (sqa > sqb + sqc) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (sqa < sqb + sqc) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((a == b || b == c || a == c) && !(a == b && b == c)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
