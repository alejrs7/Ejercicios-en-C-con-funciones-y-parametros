2. Inverso de un número.c
#include <stdio.h>

int inversoNumero(int numero) {
    int inverso = 0;
    while (numero != 0) {
        inverso = inverso * 10 + numero % 10;
        numero /= 10;
    }
    return inverso;
}

int main() {
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    printf("El inverso del numero es: %d\n", inversoNumero(numero));
    return 0;
}

