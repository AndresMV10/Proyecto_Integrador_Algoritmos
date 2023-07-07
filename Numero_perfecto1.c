#include <stdio.h>

int main() {
    long int NUM, i, j, sum = 0;
    int contador = 0;

    printf("Ingrese un número positivo: ");
    scanf("%ld", &NUM);

    while (NUM < 0) {
        printf("Error: Ingrese un número positivo: ");
        scanf("%ld", &NUM);
    }

    printf("Números perfectos entre 1 y %ld:\n", NUM);

    for (i = 1; i <= NUM; i++) {
        sum = 0;

        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        if (sum == i) {
            printf("%ld\n", i);
            contador++;
        }
    }

    printf("Cantidad de números perfectos: %d\n", contador);

    return 0;
}