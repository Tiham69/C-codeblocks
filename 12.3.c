#include <stdio.h>
void main(){
char a,b;
int c;
scanf("%c",&a);
scanf("%c",&b);
scanf("%d",&c);
if (a=='F'|| a=='f')
{
    if (b=='P' || b=='p'){
    printf("You are qualified for scholarship.\n");
    printf("You are lucky to be born as a female.m");

}
else{
    printf("Jokes on you.\n");
    printf("With so much benefit you  failed your exam. That is quite shameful.");
}}
else {
    if(b=='p'|| b=='P'){
        if(c>=0 && c<=70)
            printf("You are qualified for scholarship");
        else
            printf("Kid, A suggestion form me that you should kill your own self. \nThat is the best advice that I can give");
    }
}
}
