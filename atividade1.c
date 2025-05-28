#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, digite um numero inteiro positivo.\n");
        return 1;
    }

    while (numero >= 0) {
        printf("%d ", numero);
        numero--;
    }
    printf("\n");

    return 0;
}
