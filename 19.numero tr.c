19.numero tr.c
  #include <stdio.h>

int numero_Tr(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("El numero triangular %d es: %d\n", n, numero_Tr(n));
    return 0;
}
