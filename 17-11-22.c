#include <stdio.h>
int main(){

    int x= 10, y= 20, z= 30, v;
    int *ptr1, *ptr2;

    ptr2= &x;
    ptr1= &y;

    int t = *ptr1;

    *ptr1= *ptr2;
    *ptr2= t;

    printf("%d\n", ptr1);
    printf("%d\n", x);

    printf("%d\n", ptr2);
    printf("%d\n", y);

    v = *ptr1+ *ptr2;



return 0;
}
