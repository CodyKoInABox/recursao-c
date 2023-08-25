// Construa um algoritmo que use recursividade para resolver o problema matematico da serie de Pitagoras, sabendo que a serie e 1, 3, 6, 10, 15, 21

#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <unistd.h>

// formula do numero triangular de ordem n (X):
// n = ordem do numero (ex: terceiro numero da serie)
// x = resultado (valor do terceiro numero da serie)
// X = (n * (n + 1)) / 2

int triangular(int currentPos, int lastPos){
    if(currentPos == lastPos){
        return 1;
    }else{
        unsigned long long result = currentPos * (currentPos+1) / 2;
        printf("%llu, ", result);
        triangular(currentPos+1, lastPos);
    }
}

int main(){

    
    unsigned int length;
    
    printf(" Calculadora de Numeros Triangulares \n\n");
    printf("Quantos numeros voce deseja calcular? ");
    scanf("%d", &length);

    double time_spent = 0.0;
    clock_t begin = clock();
    
    triangular(1, length);

    clock_t end = clock();

    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("The elapsed time is %f seconds", time_spent);

    printf("\n");
    system("pause");

    return 0;
}
