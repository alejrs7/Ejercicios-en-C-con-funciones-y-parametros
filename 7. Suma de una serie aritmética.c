7. Suma de una serie aritmética.c
#include <stdio.h>

int Suma_Aritmetica(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("La suma de los primeros %d terminos es: %d\n", n, Suma_Aritmetica(n));
    return 0;
}
