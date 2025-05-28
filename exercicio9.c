#include <stdio.h>
#include <limits.h> // Para usar INT_MAX e INT_MIN

int main() {
    int numero;
    int maximo = INT_MIN; // Inicializa o máximo com o menor valor possível
    int minimo = INT_MAX; // Inicializa o mínimo com o maior valor possível

    printf("Digite numeros inteiros (digite 0 para sair):\n");

    // Lê números até que o usuário digite 0
    while (1) {
        scanf("%d", &numero);
        
        // Verifica se o número digitado é 0
        if (numero == 0) {
            break; // Sai do loop se o número for 0
        }

        // Atualiza o máximo e o mínimo
        if (numero > maximo) {
            maximo = numero; // Atualiza o máximo
        }
        if (numero < minimo) {
            minimo = numero; // Atualiza o mínimo
        }
    }

    // Verifica se pelo menos um número válido foi digitado
    if (maximo != INT_MIN && minimo != INT_MAX) {
        printf("Máximo = %d, Mínimo = %d\n", maximo, minimo);
    } else {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}
