#include <stdio.h>
void main(){

int n, ori, reverse=0, reminder;

printf("Type a number:");
scanf("%d", &n);

for(ori=n; n!=0; n=n/=10){

    reminder=n%10;
    reverse=reverse*10+reminder;

    }
    if(ori==reverse)
        printf("%d is a palindrome number", ori);
    else
        printf("%d is not an palindrome number", ori);
}
