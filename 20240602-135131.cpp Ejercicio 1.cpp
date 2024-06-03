#include <stdio.h>

int main() {
    float num1, num2;

    printf("Ingrese el primer número: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    printf("\n**Operaciones Matemáticas**\n");
    printf("Suma: %.2f\n", num1 + num2);
    printf("Resta: %.2f\n", num1 - num2);
    printf("Multiplicación: %.2f\n", num1 * num2);
    printf("División: %.2f\n", num1 / num2);
    printf("Resto (módulo): %.2f\n", (num1, num2));

    return 0;
}
    