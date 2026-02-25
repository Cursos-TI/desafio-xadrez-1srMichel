#include <stdio.h>

int main(){
    //movimentando cavalo com loops aninhados

    //1. while e for
    //o while vai rodar 1 vez quando o loop "for" dentro dele acabar, por que o valor de MovimentoCavalo vai zerar
    int MovimentoCavalo = 1;
    while(MovimentoCavalo--){
        for(int i = 0; i < 2; i++){
            printf("Movimento Cavalo: Cima \n");
        }
        printf("Movimento Cavalo: Direita \n");
    }

    printf("\n");

    //2. do-while e for
    //a condição inserida em "while()" do loop "do" é impossível de ser verdadeiro, 
    //mas o loop "do" roda pelo menos 1 vez, independente da condição ser true ou false.
    //assim, o loop "for" dentro dele roda, e depois que termina move o cavalo para a direita
    do{
        for(int i = 0; i < 2; i++){
            printf("movendo Cavalo: cima \n");
        }
        printf("movendo Cavalo: direita \n");
    }while(1 == 2);
}