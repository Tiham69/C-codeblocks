#include <stdio.h>
int main(){

    char ak[100];
    char  ok[10];
    int k;

    scanf("%[^\n]", ak);

    strrev(ak);

    k= strcmp(ak, ak);

    if(k==0){
        printf("Palindrome");
    }
    else
        printf("Not");

return 0;
}
