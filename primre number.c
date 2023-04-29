#include <stdio.h>

int main(void) //this code finds prime numbrer
{
    int i, j, count = 0;
    int a;

    printf("Enter a number to find prime: ");
    scanf("%d", &a);

    for(i = 1; i <= a; i += 1)
    {
        for(j = 2; j <= i/2; j++)
        {
            count = 0;

            if(i%j == 0)
            {
                count += 1;
                break;
            }
        }

        if(count == 0 && i != 1)
        {
            printf("%d\n", i);
        }
    }
}
