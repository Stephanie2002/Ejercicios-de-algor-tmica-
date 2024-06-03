#include <stdio.h>

int main() {
    int horas_trabajadas, valor_por_hora, salario;

    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%d", &horas_trabajadas);

    printf("Ingrese el valor por hora: ");
    scanf("%d", &valor_por_hora);

    salario = horas_trabajadas * valor_por_hora;

    printf("El salario a pagar es de: %d\n", salario);

    return 0;
}