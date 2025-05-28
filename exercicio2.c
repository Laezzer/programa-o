#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Digite numeros inteiros (digite 0 para sair):\n");

    // Lê números até que o usuário digite 0
    while (1) {
        scanf("%d", &numero);
        
        // Verifica se o número digitado é 0
        if (numero == 0) {
            break; // Sai do loop se o número for 0
        }

        // Adiciona o número à soma
        soma += numero;
    }

    // Exibe a soma total
    printf("Soma = %d\n", soma);

    return 0;
}
