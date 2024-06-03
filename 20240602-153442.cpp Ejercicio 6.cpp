#include <stdio.h>

int main() {
    float centimetros, pulgadas;
    
    printf("Ingrese la medida en centímetros: ");
    scanf("%f", &centimetros);
    
    pulgadas = centimetros / 2.54;
    
    printf("La medida en pulgadas es: %f\n", pulgadas);
    
    return 0;
}