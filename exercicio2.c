// Usando conceito de recursividade construa um algoritmo, onde possuem uma funcao que informar o valor de um termo da serie de Fibonacci. Obs. Sabendo que a serie e 1, 1, 2, 3, 5, 8, 13, 21, 34

#include <stdio.h>


int fibonacci(int pos){
    if(pos == 0 || pos == 1){
        return pos;
    }else{
        return (fibonacci(pos-1) + fibonacci(pos-2));
    }
}

int main(){
    
    printf("%d", fibonacci(5));

    return 0;
}
