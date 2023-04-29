#include <stdio.h>
int main(void)
{
    int i, j, k, a;

        printf("Enter a size: ");
        scanf("%i", &a);
if(a>-1)
{
    a+=1;

    for(i=1; i<a; i++)
    {
        for(j=a-2; j>=i; j--)
        {
            printf(" ");
        }

        for(k=1; k-2<j; k++)
        {
            printf(" *");
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
