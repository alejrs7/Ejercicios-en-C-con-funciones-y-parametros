11. Encontrar el MCD.c
  #include <stdio.h>

int mcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
.        a = t;
    }
    return a;
}

int main() {
    int a, b;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);
    printf("El MCD de %d y %d es: %d\n", a, b, mcd(a, b));
    return 0;
}
