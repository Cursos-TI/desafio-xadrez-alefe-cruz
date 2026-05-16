#include <stdio.h>

// Desafio de Xadrez Estacio - Alefe Cruz

void movimentacaoBispo(int casaBispoDireita) {
    for (casaBispoDireita = 0; casaBispoDireita < 5; casaBispoDireita++) { //aqui simulo a movimentação do Bispo para a direita
        printf("(Bispo_Direita\t");
        for (int casaBispoCima = 0; casaBispoCima < 1; casaBispoCima++) { //aqui simulo Bispo para cima, fazendo com que casa movimento para direita tenha exatamente um para cima
            printf("Bispo_Cima)\t");
        } 
    }   //como pedido no desafio, uso loop aninhado para simular o movimento diagonal do Bispo
}       //aqui uso a recursividade para simular o movimento do Bispo

void movimentacaoTorre(int casaTorre) {
    if (casaTorre > 0) {
        printf("(Torre_Direita)\t");
        movimentacaoTorre(casaTorre - 1);
    }
}       //aqui uso a recursividade para simular o movimento da Torr

void movimentacaoRainha(int casaRainha) {
    if (casaRainha > 0) {
        printf("(Rainha_Esquerda)\t");
        movimentacaoRainha(casaRainha - 1); 
    }
}       //aqui uso a recursividade para simular o movimento da Rainha

void movimentacaoCavalo(int casaCavaloCima) {
    printf("(");
    for (casaCavaloCima = 1; casaCavaloCima <= 2; casaCavaloCima++) { //aqui simulo o movimento do Cavalo para cima
        printf("Cavalo_Cima ");
        for (int casaCavaloDireita = 0; casaCavaloDireita < 1 && casaCavaloCima % 2 == 0; casaCavaloDireita++) {
            //aqui simulo o movimento do Cavalo para direita, fazendo um movimento em "L"
            //usando Loop e condições da maneira que entendi, fiz com que o Cavalo fizesse apenas um movimento direita para cada dois cima
            printf("Cavalo_Direita)\t");
        }
    }
}       //aqui uso a recursividade para simular o movimento do Cavalo

int main() {

        movimentacaoBispo(5); //aqui puxo a função da movimentação do Bispo, uso o 5 para simular a quantidade de movimentos
        printf("\n");
        
        movimentacaoTorre(5); //aqui puxo a função da movimentação da Torre, mesma coisa do Bispo, uso o 5 para simular a quantidade de movimentos
        printf("\n");

        movimentacaoRainha(8); //aqui puxo a função da movimentação da Rainha, novamente mesma coisa do Bispo
        printf("\n");

        movimentacaoCavalo(1); //aqui puxo a função da movimentação do Cavalo, aqui puxo apenas uma vez pois é o máximo de movimentos que o Cavalo pode fazer por rodada
        printf("\n");
        
    return 0;
}