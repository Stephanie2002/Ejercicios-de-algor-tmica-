#include <stdio.h>

int esPrimo(int numero) {
    if (numero <= 1) {
        return 0;  // Los números negativos, 0 y 1 no son primos
    }
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;  // Si es divisible por algún número que no sea 1 o él mismo, no es primo
        }
    }
    return 1;  // Si no se encontraron divisores, es primo
}

int main() {
    int num;
    printf("Ingrese un número entero para verificar si es primo: ");
    scanf("%d", &num);
    
    if (esPrimo(num)) {
        printf("%d es un número primo.\n", num);
    } else {
        printf("%d no es un número primo.\n", num);
    }
    
    return 0;
}