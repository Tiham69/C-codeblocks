#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter Two numbers: ");
    scanf("%d %d", &a, &b);

    if(a < b)
    {
        int tmp = b;
        b = a;
        a = tmp;

    }

    printf("Remainder: %d\n", (a%b));

}
