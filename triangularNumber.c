// Construa um algoritmo que use recursividade para resolver o problema matematico da serie de Pitagoras, sabendo que a serie e 1, 3, 6, 10, 15, 21

#include <stdio.h>

// formula do numero triangular de ordem n (X)
//
// X = (n * (n + 1)) / 2

int triangular(int currentPos, int lastPos){
    if(currentPos == lastPos){
        return 1;
    }else{
        printf("%d, ", (currentPos * (currentPos+1) / 2));
        triangular(currentPos+1, lastPos);
    }
}

int main(){

    triangular(1, 100);

    return 0;
}
