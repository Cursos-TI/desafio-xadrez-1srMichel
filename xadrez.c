#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void MoverBispo(int casa){
    if(casa > 0){
        printf("movendo Bispo: Diagonal Superior Direita \n");
        MoverBispo(casa - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    for(int i = 0; i < 5; i++){
        printf("movendo Bispo: Diagonal superior direita \n");
    }
    printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for(int i = 0; i < 5; i++){
        printf("Movendo Torre: Direita \n");
    }
    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for(int i = 0; i < 8; i++){
        printf("Movendo Rainha: Esquerda \n");
    }
    printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    int MovimentoCavalo = 1;
    while(MovimentoCavalo--){
        for(int i = 0; i < 2; i++){
            printf("Movimento Cavalo: Cima \n");
        }
        printf("Movimento Cavalo: Direita \n");
    }
    
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("### Movimentos usando funções recursivas ### \n \n");
    MoverBispo(5);
    printf("\n");


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
