#include <stdio.h>
void main(){
int a,b,c;
scanf("%d %d %d", &a,&b,&c);
if(a>b){
    if(a>c)
        printf("%d is grater than %d", a,c);
    else
        printf("%d is the largest number out of three number", c);
}
else{
    if(b>c)
        printf("%d is grater than %d", b,c);
    else
        printf("%d is the largest number out of three", c);
}
}
