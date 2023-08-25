// EXERCICIO 1 USANDO POINTERS

// Construa um algoritmo que use recursividade para resolver o problema matematico da serie de Pitagoras, sabendo que a serie e 1, 3, 6, 10, 15, 21

#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <unistd.h>

// formula do numero triangular de ordem n (X):
// n = ordem do numero (ex: terceiro numero da serie)
// x = resultado (valor do terceiro numero da serie)
// X = (n * (n + 1)) / 2

int currentPos;
int lastPos;
int aux;

int triangular(int *currentPos, int *lastPos){
    if(*currentPos == *lastPos){
        return 1;
    }else{
        printf("%d, ", (*currentPos * (*currentPos+1) / 2));
        aux = *currentPos + 1;
        triangular(&aux, lastPos);
    }
}

int main(){


    
    printf(" Calculadora de Numeros Triangulares \n\n");
    printf("Quantos numeros voce deseja calcular? ");
    scanf("%d", &lastPos);

    currentPos = 1;

    double time_spent = 0.0;
    clock_t begin = clock();

    triangular(&currentPos, &lastPos);


    
    clock_t end = clock();

    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nThe elapsed time is %f seconds", time_spent);

    printf("\n");
    system("pause");

    return 0;
}
