10. Verificar si un número es primo.c
#include <stdio.h>

int esPrm(int numero) {
    if (numero <= 1) return 0;
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) return 0;
    }
    return 1;
}

int main() {
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    if (esPrm(numero)) {
        printf("%d es primo\n", numero);
    } else {
        printf("%d no es primo\n", numero);
    }
    return 0;
}
