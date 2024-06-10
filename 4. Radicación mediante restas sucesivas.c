4. Radicación mediante restas sucesivas.c
#include <stdio.h>

int radicacionRestas(int numero, int indice) {
    int resultado = 0;
    int acumulador = 1;
    while (acumulador <= numero) {
        resultado++;
        acumulador = 1;
        for (int i = 0; i < indice; i++) {
            acumulador *= resultado;
        }
    }
    return resultado - 1;
}

int main() {
    int numero, indice;
    printf("Ingrese el numero: ");
    scanf("%d", &numero);
    printf("Ingrese el indice de la raiz: ");
    scanf("%d", &indice);
    printf("La raiz %d de %d es: %d\n", indice, numero, radicacionRestas(numero, indice));
    return 0;
}
