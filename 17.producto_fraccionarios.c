17. producto_fraccionarios.c
#include <stdio.h>

double producto_Fraccionarios(int n) {
    double producto = 1.0;
    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }
    return producto;
}

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("El producto de la serie fraccionaria hasta %d es: %.2f\n", n, producto_Fraccionarios(n));
    return 0;
}
