#include <stdio.h>
void main() {

int i, o;
printf("Input a max number: ");
scanf("%d", &i);
printf("Input the min number: ");
scanf("%d", &o);

for (i; i>=o; i=i-1)
    {
    printf("%d \n", i);
    }
printf("%d\n", i);
}
