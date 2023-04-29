#include<stdio.h>
void printfcomma2(int n){
    if(n < 1000){
        printf("%d", n);
        return;
    }
    printfcomma2(n/1000);
    printf(",%d", n%1000);
}
void printfcomma(int n){
    if(n<0){
        printf("-");
        n=-n;
    }
    printfcomma(n);
}
