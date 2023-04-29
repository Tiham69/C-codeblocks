#include <stdio.h>
int main(){

    int n, i, f=0;

    scanf("%d", &n);

    for(i=2; i<=n/2; ++i ){

        if(n%i==0){
            f=1;
            break;
        }
    }
        if(n==1){
            printf("not yes or no");

        }
        else{
            if(f==0)
                printf("Yes");

            else
                printf("No");
        }

return 0;
}
