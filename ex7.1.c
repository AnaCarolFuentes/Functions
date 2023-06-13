#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 5

/*Escreva um programa que leia 5 valores inteiros e imprima para cada
um o seu valor absoluto. Para obter o valor absoluto do número utilize a função
“absoluto”, especificada abaixo: */
int valorAbsoluto(int numero) {
    return abs(numero);
}

int main(){

    int numero[N] = {0};

    for(int i =0; i<N; i++){
        printf("n%d: ", i);
        scanf("%d", &numero[i]);
    }

    for(int i =0; i<N; i++){
        printf("absoluto(%d) = %d\n", numero[i], abs(numero[i]));
    }







}