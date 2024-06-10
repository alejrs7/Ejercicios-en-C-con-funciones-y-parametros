16.suma_fraccionarios.c
#include <stdio.h>

double sumaFraccionarios(int n) {
    double suma = 0.0;
    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }
    return suma;
}

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("La suma de la serie fraccionaria hasta %d es: %.2f\n", n, sumaFraccionarios(n));
    return 0;
}
