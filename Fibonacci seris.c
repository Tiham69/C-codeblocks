#include <stdio.h>
int main(){

    int n1=0, n2=1, n3, a, i;

    scanf("%d", &a);

    printf("%d\n%d\n", n1, n2);

    for(i=2; i<a; ++i){

        n3=n1+n2;
        printf("%d\n", n3);

        n1=n2;
        n2=n3;
    }

return 0;
}
