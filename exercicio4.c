#include <stdio.h>

int main() {
    float nota;
    float soma = 0.0;
    int contador = 0;

    printf("Digite notas (0 a 10). Digite uma nota invalida para sair:\n");

    // Lê notas até que uma nota inválida seja digitada
    while (1) {
        scanf("%f", &nota);
        
        // Verifica se a nota é válida
        if (nota < 0 || nota > 10) {
            break; // Sai do loop se a nota for inválida
        }

        // Adiciona a nota à soma e incrementa o contador
        soma += nota;
        contador++;
    }

    // Verifica se foram digitadas notas válidas
    if (contador > 0) {
        // Calcula a média
        float media = soma / contador;
        printf("Média = %.2f\n", media);
    } else {
        printf("Nenhuma nota válida foi digitada.\n");
    }

    return 0;
}
