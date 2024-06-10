8. Producto de una serie geométrica.c
  #include <stdio.h>

int productGeometrico(int base, int n) {
    int product = 1;
    for (int i = 0; i < n; i++) {
        product *= base;
        base *= 2;
    }
    return product;
}

int main() {
    int base, n;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &n);
    printf("El producto de los primeros %d terminos es: %d\n", n, productGeometrico(base, n));
    return 0;
}
