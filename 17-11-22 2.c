#include <stdio.h>
int main(){

    int a[5]= {10, 20, 30, 40, 50};
    int *ptr;

    ptr= &a[0];

    printf("%d\n", *ptr);

    for(int i=0; i<5; i++){
        printf("%d = %d\n",i, *ptr);
        printf("%d = %d\n",i, ptr);

        ptr++;
    }

return 0;
}
