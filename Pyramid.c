#include <stdio.h>
int main(){

    int i, j, a;

    scanf("%d", &a);

    for(i=0; i<a; i++){

        for(j=0; j<a-i-1; j++){
            printf(" ");
        }
        for(j=0; j<2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}
