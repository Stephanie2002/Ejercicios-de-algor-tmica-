#include <stdio.h>

int main() {
    float lado, area;
    
    printf("Ingrese la longitud del lado del cuadrado: ");
    scanf("%f", &lado);
    
    area = lado * lado;
    
    printf("El área del cuadrado es: %f\n", area);
    
    return 0;
}