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
    int x,y,z;
    printf("entre com tres lados de um triangulo\n");
    scanf("%i %i %i", &x,&y, &z);
    if (x >= y+z){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }

    if (expo(x,2) == expo(y,2)+expo(z,2)){
        printf("TRIANGULO RETANGULO\n");
    }
    if(expo(x,2) > expo(y,2)+expo(z,2)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(expo(x,2) < expo(y,2)+expo(z,2)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(z==y && z==x){
        printf("TRIANGULO EQUILATERO\n");
    }
    if(x==y || x == z || z == y){
        printf("TRIANGULO ISOSCELES\n");
    }
    

    

    
}