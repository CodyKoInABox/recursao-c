// Construa um algoritmo que use recursividade para resolver o problema matematico da serie de Pitagoras, sabendo que a serie e 1, 3, 6, 10, 15, 21

#include <stdio.h>

// formula do numero triangular de ordem n (X):
// n = ordem do numero (ex: terceiro numero da serie)
// x = resultado (valor do terceiro numero da serie)
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
    
    int length;
    
    printf(" Calculadora de Numeros Triangulares \n\n");
    printf("Quantos numeros voce deseja calcular? ");
    scanf("%d", &length);
    
    triangular(1, length);

    return 0;
}
