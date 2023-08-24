#include<stdio.h>

int main(){
    int a,b;
    scanf("%i %i", &a,&b);
    int maior, menor, soma = 0;
    if(a > b){
        maior = a;
        menor = b+1;
    }else{
        menor = a+1;
        maior = b;
    }

    while (menor < maior){
        if (menor%2 != 0){
            soma += menor;
        }
        menor++;
    }

    printf("%i\n", soma);
    
}