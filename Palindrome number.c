#include <stdio.h>
void main() {

int reverse=0, reminder, n, ori;

printf("Type a number: ");
scanf("%d", &n);
printf("\n");

ori=n;

while(n!=0){

    reminder=n%10;

    reverse=reverse*10+reminder;

    n/=10;

    }
    if(reverse==ori){
        printf("Given number %d is a palindrome number", ori);
    }
    else{
        printf("Given number %d is a not palindrome number", ori);
        }

}
