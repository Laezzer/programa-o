#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *itens;
    int inicio;
    int fim;
    int tamanho;
    int capacidade;
} Fila;

// Função para inicializar a fila
void inicializarFila(Fila *f, int capacidade) {
    f->capacidade = capacidade;
    f->itens = (int*) malloc(capacidade * sizeof(int));
    f->inicio = 0;
    f->fim = 0;
    f->tamanho = 0;
}

// Verifica se a fila está cheia
int estaCheia(Fila *f) {
    return f->tamanho == f->capacidade;
}

// Verifica se a fila está vazia
int estaVazia(Fila *f) {
    return f->tamanho == 0;
}

// Enfileirar elemento
void enfileirar(Fila *f, int valor) {
    if (estaCheia(f)) {
        printf("⚠️  Fila cheia! Não é possível enfileirar.\n");
        return;
    }
    f->itens[f->fim] = valor;
    f->fim = (f->fim + 1) % f->capacidade;
    f->tamanho++;
    printf("✅ Elemento %d adicionado com sucesso!\n", valor);
}

// Desenfileirar elemento
void desenfileirar(Fila *f) {
    if (estaVazia(f)) {
        printf("⚠️  Fila vazia! Nada para desenfileirar.\n");
        return;
    }
    int removido = f->itens[f->inicio];
    f->inicio = (f->inicio + 1) % f->capacidade;
    f->tamanho--;
    printf("🗑️  Desenfileirado: %d\n", removido);
}

// Mostrar conteúdo da fila
void mostraFila(Fila *f) {
    if (estaVazia(f)) {
        printf("📭 Fila vazia!\n");
        return;
    }

    printf("📦 Fila: ");
    for (int i = 0; i < f->tamanho; i++) {
        int index = (f->inicio + i) % f->capacidade;
        printf("%d ", f->itens[index]);
    }
    printf("\n");
}

// Encontrar elemento na fila
void encontrarElemento(Fila *f, int valor) {
    int contador = 0;
    for (int i = 0; i < f->tamanho; i++) {
        int index = (f->inicio + i) % f->capacidade;
        if (f->itens[index] == valor) {
            contador++;
        }
    }

    if (contador == 0) {
        printf("🔍 Elemento %d não encontrado na fila.\n", valor);
    } else {
        printf("🔍 O elemento %d aparece %d vez(es) na fila.\n", valor, contador);
    }
}

// Liberar memória alocada
void liberarFila(Fila *f) {
    free(f->itens);
}

int main() {
    Fila fila;
    int opcao, valor, capacidade;

    printf("Defina o tamanho máximo da fila: ");
    scanf("%d", &capacidade);

    inicializarFila(&fila, capacidade);

    do {
        printf("\n===== MENU DA FILA =====\n");
        printf("1. Enfileirar elemento\n");
        printf("2. Desenfileirar elemento\n");
        printf("3. Mostrar conteúdo da fila\n");
        printf("4. Encontrar elemento na fila\n");
        printf("0. Sair\n");
        printf("=========================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor para enfileirar: ");
                scanf("%d", &valor);
                enfileirar(&fila, valor);
                break;
            case 2:
                desenfileirar(&fila);
                break;
            case 3:
                mostraFila(&fila);
                break;
            case 4:
                printf("Digite o valor a procurar: ");
                scanf("%d", &valor);
                encontrarElemento(&fila, valor);
                break;
            case 0:
                printf("👋 Encerrando o programa...\n");
                break;
            default:
                printf("❌ Opção inválida. Tente novamente.\n");
        }

        // Exibe o número de elementos na fila
        if (opcao >= 1 && opcao <= 4) {
            printf("📊 Total de elementos na fila: %d\n", fila.tamanho);
        }

    } while (opcao != 0);

    liberarFila(&fila);
    return 0;
}
