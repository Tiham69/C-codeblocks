#include <stdio.h>

int main() {
    int dia_inicio, dia_fim, hora_inicio, hora_fim, minuto_inicio, minuto_fim, segundo_inicio, segundo_fim;

    scanf("Dia %d", &dia_inicio);
    scanf("%d : %d : %d", &hora_inicio, &minuto_inicio, &segundo_inicio);
    scanf("Dia %d", &dia_fim);
    scanf("%d : %d : %d", &hora_fim, &minuto_fim, &segundo_fim);

    int total_segundos_inicio = ((dia_inicio-1)*86400) + (hora_inicio*3600) + (minuto_inicio*60) + segundo_inicio;
    int total_segundos_fim = ((dia_fim-1)*86400) + (hora_fim*3600) + (minuto_fim*60) + segundo_fim;

    int duracao_segundos = total_segundos_fim - total_segundos_inicio;
    int duracao_dias = duracao_segundos / 86400;
    int duracao_horas = (duracao_segundos % 86400) / 3600;
    int duracao_minutos = (duracao_segundos % 3600) / 60;
    int duracao_segundos_final = duracao_segundos % 60;

    printf("%d dia(s)\n", duracao_dias);
    printf("%d hora(s)\n", duracao_horas);
    printf("%d minuto(s)\n", duracao_minutos);
    printf("%d segundo(s)\n", duracao_segundos_final);

    return 0;
}


