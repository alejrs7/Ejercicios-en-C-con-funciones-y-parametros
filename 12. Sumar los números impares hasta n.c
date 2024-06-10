12. Sumar los números impares hasta n.c
#include <stdio.h>

int sumaImpares(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i += 2) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("La suma de los numeros impares hasta %d es: %d\n", n, sumaImpares(n));
    return 0;
}
