20.Suma_factoriales.c
#include <stdio.h>

int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int suma_Factoriales(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += factorial(i);
    }
    return suma;
}

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("La suma de los factoriales de los primeros %d numeros es: %d\n", n, suma_Factoriales(n));
    return 0;
}
