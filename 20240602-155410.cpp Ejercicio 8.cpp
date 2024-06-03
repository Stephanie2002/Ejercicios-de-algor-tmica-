#include <stdio.h>

void convertirTiempo(int segundos) {
    int horas, minutos, seg;

    horas = segundos / 3600;  // 1 hora = 3600 segundos
    segundos = segundos % 3600;
    minutos = segundos / 60;  // 1 minuto = 60 segundos
    seg = segundos % 60;

    printf("El tiempo en horas, minutos y segundos es: %d:%d:%d\n", horas, minutos, seg);
}

int main() {
    int segundos;
    printf("Ingrese el tiempo en segundos: ");
    scanf("%d", &segundos);
    convertirTiempo(segundos);
    return 0;
}