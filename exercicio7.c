#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1;
    }

    // Calcula a soma dos divisores
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i; // Adiciona o divisor à soma
        }
    }

    // Verifica se o número é perfeito
    if (soma == numero) {
        printf("%d é perfeito\n", numero);
    } else {
        printf("%d não é perfeito\n", numero);
    }

    return 0;
}