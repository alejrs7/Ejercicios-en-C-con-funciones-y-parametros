3. Potencia mediante sumas sucesivas.c
  #include <stdio.h>

int potenciaSumas(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        int suma = 0;
        for (int j = 0; j < base; j++) {
            suma += resultado;
        }
        resultado = suma;
    }
    return resultado;
}

int main() {
    int base, exponente;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    printf("%d^%d = %d\n", base, exponente, potenciaSumas(base, exponente));
    return 0;
}
