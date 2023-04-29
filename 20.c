#include <stdio.h>
void main(){
int n, fact;

printf("Enter a value for it's factorial: ");
scanf("%d", &n);

fact=1;

    for(n; n>=1; n--){
    fact=fact*n;

    }
    printf("The factorial of %d is %d\n", n,fact);
}
