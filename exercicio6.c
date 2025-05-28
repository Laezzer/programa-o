#include <stdio.h>

int main() {
    int N;
    int primeiro = 0, segundo = 1, proximo;

    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &N);

    // Verifica se N é válido
    if (N <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1;
    }

    printf("Sequência de Fibonacci: ");

    // Gera os termos da sequência de Fibonacci
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            printf("%d", primeiro); // Imprime o primeiro termo
        } else if (i == 1) {
            printf(", %d", segundo); // Imprime o segundo termo
        } else {
            proximo = primeiro + segundo; // Calcula o próximo termo
            printf(", %d", proximo); // Imprime o próximo termo
            primeiro = segundo; // Atualiza o primeiro termo
            segundo = proximo; // Atualiza o segundo termo
        }
    }

    printf("\n");

    return 0;
}
