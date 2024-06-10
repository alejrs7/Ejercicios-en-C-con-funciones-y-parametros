6. Factorial de un Numero.c
  #include <stdio.h>

int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("El factorial de %d es: %d\n", n, factorial(n));
    return 0;
}
