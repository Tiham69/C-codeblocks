#include <stdio.h>
int main(){

    int a, c, b, d;
    char j ='1';

    for(c=0; c<5; c++){
        for(a=4; a>=c; a--){
            printf("%c", j);
        }
        printf("\n");
        printf(" ");
    }

return 0;
}

