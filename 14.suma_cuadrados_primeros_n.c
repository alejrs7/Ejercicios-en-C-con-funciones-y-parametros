14.suma_cuadrados_primeros_n.c
#include <stdio.h>

int suma_Cuadrados(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }
    return suma;
}

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("La suma de los cuadrados de los primeros %d numeros es: %d\n", n, suma_Cuadrados(n));
    return 0;
}
