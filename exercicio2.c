// Usando conceito de recursividade construa um algoritmo, onde possuem uma funcao que informar o valor de um termo da serie de Fibonacci. Obs. Sabendo que a serie e 1, 1, 2, 3, 5, 8, 13, 21, 34

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int pos){
    if(pos == 0 || pos == 1){
        return pos;
    }else{
        return (fibonacci(pos-1) + fibonacci(pos-2));
    }
}

int main(){

    int pos;

    printf("Qual numero da sequencia de Fibonacci voce deseja calcular? ");
    scanf("%d", &pos);
    
    printf("%d", fibonacci(pos));

    printf("\n");
    system("pause");

    return 0;
}
