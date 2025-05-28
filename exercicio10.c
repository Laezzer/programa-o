#include <stdio.h>

int main() {
    int numero;
    int binario[32]; // Array para armazenar os dígitos binários
    int i = 0;

    printf("Digite um numero decimal: ");
    scanf("%d", &numero);

    // Verifica se o número é não negativo
    if (numero < 0) {
        printf("Por favor, digite um numero inteiro não negativo.\n");
        return 1;
    }

    // Converte o número decimal para binário
    do {
        binario[i] = numero % 2; // Armazena o resto da divisão por 2
        numero /= 2;              // Divide o número por 2
        i++;                      // Incrementa o índice
    } while (numero > 0);

    // Exibe o resultado em ordem reversa
    printf("Número em binário: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}
