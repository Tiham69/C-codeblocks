#include <stdio.h>
int main(){

    double a, i;
    double count = 0;

    for(i=0; i<6; i++){
        scanf("%lf", &a);

        if(a>-1){
            count++;
        }
    }

    printf("%.0lf\n", count);

return 0;
}
