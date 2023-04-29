#include <stdio.h>
int main(){

    double s, sum, fs;

    scanf("%lf", &s);

    if(s>=0 && s<=400){
        sum = s*0.15;
        fs = sum+s;

        printf("Novo salario: %.2lf\n", fs);
        printf("Reajuste ganho: %.2lf\n", sum);
        printf("Em percentual:15%%\n");
    }
    else if(s>400 && s<=800){
        sum = s*0.12;
        fs = sum+s;

        printf("Novo salario: %.2lf\n", fs);
        printf("Reajuste ganho: %.2lf\n", sum);
        printf("Em percentual:12%%\n");
    }
    else if(s>800 && s<=1200){
        sum = s*0.10;
        fs = sum+s;

        printf("Novo salario: %.2lf\n", fs);
        printf("Reajuste ganho: %.2lf\n", sum);
        printf("Em percentual:10%%\n");
    }
    else if(s>1200 && s<=2000){
        sum = s*0.07;
        fs = sum+s;

        printf("Novo salario: %.2lf\n", fs);
        printf("Reajuste ganho: %.2lf\n", sum);
        printf("Em percentual:7%%\n");
    }
    else if(s>2000){
        sum = s*0.04;
        fs = sum+s;

        printf("Novo salario: %.2lf\n", fs);
        printf("Reajuste ganho: %.2lf\n", sum);
        printf("Em percentual:4%%\n");
    }

return 0;
}
