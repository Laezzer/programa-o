#include <stdio.h>

int main() {
    int numero, invertido = 0, digito;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero < 0) {
        printf("Por favor, digite um numero inteiro positivo.\n");
        return 1;
    }

    // Inverte os dígitos do número
    while (numero > 0) {
        digito = numero % 10;        // Extrai o último dígito
        invertido = invertido * 10 + digito; // Adiciona o dígito invertido
        numero /= 10;                // Remove o último dígito
    }

    printf("Numero invertido: %d\n", invertido);

    return 0;
}

