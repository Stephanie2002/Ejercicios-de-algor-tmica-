#include <stdio.h>

int sumaDigitos(int numero) {
    int suma = 0;
    while (numero != 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}

int main() {
    int num;
    printf("Ingresa un número: ");
    scanf("%d", &num);
    printf("La suma de los dígitos es: %d", sumaDigitos(num));
    return 0;
}