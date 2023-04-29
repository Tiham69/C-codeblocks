#include <stdio.h>
void main(){
int i, e;

printf("Input a number: ");
scanf("%d", &i);
printf("Input another number: ");
scanf("%d", &e);

for (i; i<=e; i=i-1)
  {
      printf("%d\n", i);
  }
}
