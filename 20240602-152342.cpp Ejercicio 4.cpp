#include <stdio.h>

void tablaMultiplicar(int numero) {
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, (numero * i));
    }
}

int main() {
    int num;
    printf("Ingrese un número entero para obtener su tabla de multiplicar: ");
    scanf("%d", &num);
    tablaMultiplicar(num);
    return 0;
}