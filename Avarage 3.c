#include <stdio.h>
int main(){

    double n1, n2, n3, n4, avg, avg2, e1;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);


    avg = (n1*2+n2*3+n3*4+n4*1)/10;

    if(avg<=6.9 && avg>=5.00){
    scanf("%lf", &e1);
    }

    printf("Media: %.1lf\n", avg);

    if(avg>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(avg<5.0){
        printf("Aluno reprovado.\n");
    }
    else if(avg<=6.9 && avg>= 5.0){
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n", e1);
        avg2 = (avg+e1)/2;
        if(avg2>=5.00){
        printf("Aluno aprovado.\n");
    }
    else{
    printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1lf\n", avg2);
    }

return 0;
}
