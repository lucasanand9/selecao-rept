#include <stdio.h>

double expo(double b,double e){
    double aux;
    if (e == 0){
        return 1;
    }
    if (e < 0){
        b = 1/b;
        aux = b;
        for (int i = 1; i < -1*e; i++){
            b *= aux;
        }
        return b;
    }
    aux = b;
    for (int i = 1; i < e; i++){
        b *= aux;
    }
    return b;
}

int main(){
    int lados[3];
    int aux = 0;
    printf("entre com tres lados de um triangulo\n");
    scanf("%i %i %i", &lados[0], &lados[1], &lados[2]);
    
    for (int j = 0; j < 3; j++){
    aux = 0;
        for (int  i = 0; i < 3-1; i++){
            if(lados[i] < lados[i+1]){
                aux=lados[i];
                lados[i] = lados[i+1];
                lados[i+1] = aux;
            }
        }
    }
    int a = lados [0];
    int b = lados [1];
    int c = lados [2];
    printf("a: %i\n", a);
    printf("b: %i\n", b);
    printf("c: %i\n", c);

    if (a >= b+c){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }

    if (expo(a,2) == (expo(b,2)+expo(c,2))){
        printf("TRIANGULO RETANGULO\n");
    }

    if (expo(a,2) > (expo(b,2)+expo(c,2))){
        printf("TRIANGULO OBTUSANGULO\n");
    }

    if (expo(a,2) < (expo(b,2)+expo(c,2))){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    }

    if ((a == b && b != c) || (b == c && c != a )|| (a == c && c != b)){
        printf("TRIANGULO ISOSCELES\n");
    }
    
    
    
    
    
    
}