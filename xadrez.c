#include <stdio.h>

// Desafio de Xadrez Estacio - Alefe Cruz

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int bispo, torre, rainha; //aqui crio cada variável pedida no desafio

    bispo = 1;
    torre = 1;
    rainha = 8; //aqui dou os valores para cada uma, colo a rainha como 8 para simular ela estando na última casa da direita

    while (bispo <= 5) { // aqui simulo a movimentação do Bispo em diagonal cima-direita
        printf("Bispo Cima-Direita\n");
        bispo++;
    }

    do { // aqui simulo a movimentação da Torre para a direita
        printf("Torre Direita\n");
        torre++;
    } while (torre <= 5);

    for (rainha; rainha >= 1; rainha--) { // aqui simulo a movimentação da Rainha para a esquerda
        printf("Rainha Esquerda\n");
    }

    //acima usei as 3 estruturas diferentes como foi pedido, para demonstra como entendi cada uma

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}