#include <stdio.h>

int main() {
    int numero;
    long long fatorial = 1; // Usamos long long para evitar overflow em números grandes

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero < 0) {
        printf("Por favor, digite um numero inteiro positivo.\n");
        return 1;
    }

    int i = numero; // Inicializa i com o número digitado

    // Calcula o fatorial usando um loop while
    while (i > 1) {
        fatorial *= i; // Multiplica o fatorial pelo valor atual de i
        i--; // Decrementa i
    }

    // Exibe o resultado
    printf("Fatorial de %d = %lld\n", numero, fatorial);

    return 0;
}
