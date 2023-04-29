#include <stdio.h>

int add_number(int a, int b);

int main(){

    int n1, n2, sum;
    printf("Enter two number:");
    scanf("%d %d", &n1, &n2);

    sum= add_number(n1, n2);
    printf("sum= %d\n", sum);

return 0;
}
int add_number(int a, int b){

    int result;
    result= a+b;

return result;
}
