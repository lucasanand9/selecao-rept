#include<stdio.h>

int somaimp(int a, int b){
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

    return soma;
}

int main(){
    int n, a, b;
    scanf("%i", &n);
    int reslt[n];

    for (int i = 0; i < n; i++){
        scanf("%i %i", &a,&b);
        reslt[i] = somaimp(a,b);
    }

    for (int i = 0; i < n; i++){
        printf("%i\n", reslt[i]);
    }
    
    
}