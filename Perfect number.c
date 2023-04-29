#include <stdio.h>
void main(){
int i, n, sum;

printf("Type a number:");
scanf("%d", &n);

sum=0;
for(i=1; i<n; i++){             /*find the GCD of the number*/

    if(n%i==0)
        sum=sum+i;

    }
    if(n==sum)              /* check if the input number is equal to the sum GCD of the number*/
        printf("%d is a perfect number", n);
    else
        printf("%d is not a perfect number", n);
}
