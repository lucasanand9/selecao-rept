#include<stdio.h>

int main(){
    int inicio, fim, tempo;
    scanf("%i %i", &inicio, &fim);

    if (inicio > fim){
       tempo = (24 - inicio) + fim;
    }else if(fim > inicio){
        tempo = fim - inicio;
    }else{
        tempo = 24;
    }

    printf("O jogo durou %i horas\n", tempo);
    
}