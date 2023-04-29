#include <stdio.h>
int main(void)
{
    int i, j;

    printf("Enter the size: ");
    scanf("%i", &i);
if(i>-1)
{
    for(i; i>0; i--)
    {
        for(j=1; i-1>j-2; j++)
        {
            printf(" ");

            if(i>j-2)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
else
{
    printf("Enter a positive value.");
}

return 0;
}
