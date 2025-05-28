#include <stdio.h>

int main() {
    int numero, digito;
    int pares = 0, impares = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Trata o caso em que o número é negativo
    if (numero < 0) {
        numero = -numero; // Converte para positivo
    }

    // Conta os dígitos pares e ímpares
    while (numero > 0) {
        digito = numero % 10; // Obtém o último dígito
        if (digito % 2 == 0) {
            pares++; // Incrementa o contador de pares
        } else {
            impares++; // Incrementa o contador de ímpares
        }
        numero /= 10; // Remove o último dígito
    }

    // Exibe o resultado
    printf("%d pares, %d ímpares\n", pares, impares);

    return 0;
}
