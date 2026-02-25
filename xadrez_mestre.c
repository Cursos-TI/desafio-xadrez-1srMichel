#include <stdio.h>

//função recursiva para o movimento do Bispo
void MoverBispo(int casa){
        for(casa = 1; casa <= 5; casa++){
            for(casa = 1; casa <= 5; casa++){
                printf("movendo Bispo: Cima \n");
                printf("movendo Bispo: Direita \n");
            }
        }
}

//função recursiva para o movimento da Torre
void MoverTorre(int casa){
    if(casa > 0){
        printf("movendo Torre: Direita \n");
        MoverTorre(casa - 1);
    }
}

//função recursiva para o movimento da Rainha
void MoverRainha(int casa){
    if(casa > 0){
        printf("movendo Rainha: Esquerda \n");
        MoverRainha(casa - 1);
    }
}

void MoverCavalo(int casa){
    if(casa > 0){
        printf("movendo Cavalo: Cima \n");
    }else{
        printf("movendo Cavalo: Direita \n");
        return; //para a função recursiva acabar
    }
    MoverCavalo(casa - 1);
}

int main(){
    //chamando a função para mover o Bispo
    MoverBispo(5);
    printf("\n");

    //chamando a função para mover a Torre
    MoverTorre(5);
    printf("\n");

    //chamando a função para mover a Rainha
    MoverRainha(8);
    printf("\n");

    MoverCavalo(2);

    return 0;
}