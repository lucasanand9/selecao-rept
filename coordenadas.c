#include <stdio.h>

int main(){
    int x,y;

    scanf("%i %i", &x,&y);

    if (x == 0 && y == 0){
        printf("origem\n");
    }else if(x == 0){
        printf("eixo y\n");
    }else if(y == 0){
        printf("eixo x\n");
    }else if(x>0 && y >0){
        printf("q1\n");
    }else if(x> 0 && y< 0){
        printf("q4\n");
    }else if(x<0 && y>0){
        printf("q2\n");
    }else{
        printf("q3\n");
    }
    
}