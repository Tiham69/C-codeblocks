#include <stdio.h>
void main(){
int i, j, row;

printf("Input the row cap:");
scanf("%d", &row);

for(i=1; i<=row; i++){

   for(j=row; j>=i; j--){
          printf("*");
        }

        printf("\n");
    }
}
