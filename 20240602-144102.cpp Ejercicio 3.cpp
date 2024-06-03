#include <stdio.h>

int main() {
    float base, altura;
    
    printf("Ingrese la base del rectángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del rectángulo: ");
    scanf("%f", &altura);
    
    float area = base * altura;
    float perimetro = 2 * (base + altura);
    
    printf("El área del rectángulo es: %f\n", area);
    printf("El perímetro del rectángulo es: %f\n", perimetro);
    
    return 0;
}