5. Serie de Fibonacci.c
  #include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, siguiente;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        siguiente = a + b;
        a = b;
        b = siguiente;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Ingrese la cantidad de elementos de la serie Fibonacci: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
