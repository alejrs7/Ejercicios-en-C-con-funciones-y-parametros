1. Sumar.c
#include <stdio.h>

int main() {
    int numero, suma = 0, digito, divisor = 1;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    int i = numero;
    while (i >= 10) {
        i /= 10;
    }

    printf("Digitos de %d: ", numero);

    int z = divisor *= 10;
    while (z > 1) {
        digito = numero / z;
        suma += digito;
        printf("%d", digito);
        numero %= z;
        if (z > 10) {
            printf("+");
        }
        z /= 10;
    }

    printf(" = %d\n", suma);

    return 0;
}
