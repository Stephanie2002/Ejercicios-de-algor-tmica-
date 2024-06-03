#include <stdio.h>

int main() {
    float num1, num2, num3;
    
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%f", &num3);
    
    float suma = num1 + num2 + num3;
    float multiplicacion = num1 * num2 * num3;
    
    printf("La suma de los números es: %f\n", suma);
    printf("La multiplicación de los números es: %f\n", multiplicacion);
    
    return 0;
}