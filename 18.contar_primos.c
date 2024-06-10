18. contar_primos.c
#include <stdio.h>

int esPrm(int numero) {
    if (numero <= 1) return 0;
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) return 0;
    }
    return 1;
}

int contar_Primos(int n) {
    int contador = 0;
    for (int i = 2; i <= n; i++) {
        if (esPrm(i)) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("Hay %d numeros primos hasta %d\n", contar_Primos(n), n);
    return 0;
}
