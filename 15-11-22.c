#include <stdio.h>
int factorial(int l);
void main(){
    int n, s;
    scanf("%d", &n);
    s= factorial(n);
    printf("%d! = %d\n",n, s);

return 0;
}

int factorial(int l){

    if(l<=0)
    return 1;
    else
    return(l*factorial(l-1));
}
