#include <stdio.h>
void main(){
int i, sum;
i=115;
sum=0;
for (i=115;i>=25;i--){
        if(i%7==0){
         sum=sum+i;
    }
      printf("%d\n",sum);
  }

}
