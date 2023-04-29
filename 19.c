#include<stdio.h>
void main(){

int a, b,i,gcd;

scanf("%d", &a);

scanf("%d", &b);
printf("\n");
i=1;
while(i<=a){

        if(a%i==0 && b%i==0)
        printf("%d \n", i);
        gcd=i;
         printf("%d\n", gcd);
        i++;
        }

}
