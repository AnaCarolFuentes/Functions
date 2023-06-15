#include <stdio.h>
#include <stdlib.h>

#define N 5


void lista(int [], int);
int somaVetor(int[], int);

int main(){

    int array[N] = {1,2,3,4,5};
    lista(array, N);
    printf("\n");
    
    printf("Soma = %d", somaVetor(array, N));
    printf("\n");


}

void lista(int array[], int tamanho){

    for(int i =0; i<tamanho; i++){
        printf("%d", array[i]);
    }
}

int somaVetor (int array[], int tamanho){

    int soma = 0;

    for(int i=0; i<tamanho; i++){
        soma = soma + array[i];
    }
    return soma;
}