#include <stdio.h>

// Desafio de Xadrez Estacio - Alefe Cruz

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int bispo, torre, rainha;
    int cavalo = 1;

    bispo = 1;
    torre = 1;
    rainha = 8;

    while (bispo <= 5) { // Simulando a movimentação do Bispo em diagonal cima-direita
        printf("Bispo_Cima-Direita\t");
        bispo++;
    }   printf("\n");

    do { // Simulando a movimentação da Torre para a direita
        printf("Torre_Direita\t");
        torre++;
    } while (torre <= 5);
    printf("\n");

    for (rainha; rainha >= 1; rainha--) { // Simulando a movimentação da Rainha para a esquerda
        printf("Rainha_Esquerda\t");
    }   printf("\n");

    while(cavalo--) { // Simulando a movimentação do Cavalo para cima e para a direita
        for (int i = 0; i < 2; i++) { // O Cavalo se move em "L", então ele pode se mover 2 casas para cima (ou baixo) e 1 para a direita ou esquerda
            printf("Cavalo_Cima\t");
        }
        printf("Cavalo_Direita\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}