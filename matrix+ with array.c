#include <stdio.h>

void main(){

int i, j,count;

count=0;
for(i=1; i<=50; i++){

    for(j=2; j<=i/2; j++){
            count=0;

        if(i%j==0){

            count++;
            break;
            }

        }

       if(count==0&&i!=1)
        printf("%d\n",i );
    }



}
