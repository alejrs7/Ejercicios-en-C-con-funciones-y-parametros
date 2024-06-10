9. Número de dígitos de un número.c
#include <stdio.h>

int contarDigitos(int numero) {
    int contador = 0;
    do {
        numero /= 10;
        contador++;
    } while (numero != 0);
    return contador;
}

int main() {
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    printf("El numero %d tiene %d digitos\n", numero, contarDigitos(numero));
    return 0;
}
