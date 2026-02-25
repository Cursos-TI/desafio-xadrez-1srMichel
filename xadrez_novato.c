#include <stdio.h>

int main(){

    //movimento do Bispo
    for(int i = 0; i < 5; i++){
        printf("movendo Bispo: Cima \n");
        printf("movendo Bispo: Direita \n");
    }
    printf("\n");

    //movimento da Torre
     for(int i = 0; i < 5; i++){
        printf("Movendo Torre: Direita \n");
    }
    printf("\n");

    //movimento da Rainha
    for(int i = 0; i < 8; i++){
        printf("Movendo Rainha: Esquerda \n");
    }
    printf("\n");

    return 0;
}