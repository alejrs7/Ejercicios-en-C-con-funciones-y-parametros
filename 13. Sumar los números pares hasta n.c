
13. Sumar los números pares hasta n.c
  #include <stdio.h>

int suma_Pares(int n) {
    int suma = 0;
    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("La suma de los numeros pares hasta %d es: %d\n", n, suma_Pares(n));
    return 0;
}


