#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // --- Movimento da Torre ---
    // Simula o movimento da Torre 5 casas para a direita usando um loop 'for'.
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    int casasTorre = 5; // Número de casas a serem movidas pela Torre
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Movimento do Bispo ---
    // Simula o movimento do Bispo 5 casas na diagonal para cima e à direita usando um loop 'while'.
    printf("--- Movimento do Bispo (5 casas na diagonal para cima e a direita) ---\n");
    int casasBispo = 5; // Número de casas a serem movidas pelo Bispo
    int contadorBispo = 0; // Contador para o loop 'while'
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n"); // Imprime a combinação de direções para a diagonal
        contadorBispo++; // Incrementa o contador
    }
    printf("\n"); // Adiciona uma linha em branco

    // --- Movimento da Rainha ---
    // Simula o movimento da Rainha 8 casas para a esquerda usando um loop 'do-while'.
    printf("--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    int casasRainha = 8; // Número de casas a serem movidas pela Rainha
    int contadorRainha = 0; // Contador para o loop 'do-while'
    if (casasRainha > 0) { // Garante que o loop 'do-while' execute pelo menos uma vez se casasRainha for maior que 0
        do {
            printf("Esquerda\n"); // Imprime a direção do movimento
            contadorRainha++; // Incrementa o contador
        } while (contadorRainha < casasRainha);
    }
    printf("\n"); // Adiciona uma linha em branco

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}