15. Suma de los cubos de los primeros n números.c
  #include <stdio.h>

int suma_Cubos(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i * i;
    }
    return suma;
}

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("La suma de los cubos de los primeros %d numeros es: %d\n", n, suma_Cubos(n));
    return 0;
}
