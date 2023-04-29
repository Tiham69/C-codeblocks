#include <stdio.h>
void main(){

int n,r,i,k,r1, fact_n=1, fact_r=1, fact_k=1;

printf("Type the value of n:");
scanf("%d", &n);
printf("Type the value of r:");
scanf("%d", &r);

    for(i=1; i<=n; i++){
    fact_n=fact_n*i;
    printf("%d\n",fact_n);
    printf("\n");
    }

    for(i=1; i<=r; i++){
        fact_r=fact_r*i;
        printf("%d\n",fact_r);
        printf("\n");
    }

    k=n-r;
    for(i=1; i<=k; i++){
        fact_k=fact_k*i;
        printf("%d\n", fact_k);
        printf("\n");

    }

    r1=fact_n/(fact_r*fact_k);

    printf("\n");
    printf("%dC%d is %d\n",n,r, r1);
}
