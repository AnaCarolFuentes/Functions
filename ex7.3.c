#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 5

/*Escreva um programa que leia 5 pares de valores decimais. Todos os
valores lidos devem ser positivos. Caso um valor menor ou igual a zero for fornecido,
esse valor deve ser lido novamente. Para cada par lido deve ser impresso o valor do
maior elemento do par ou a frase “Eles sao iguais” se os valores do par forem iguais.
Para obter o maior elemento do par utilize a função “maiorNumero”.*/

float maiorValor(float, float);

int main(){

    float array1[N] = {0.0};
    float array2[N] = {0.0};
    float resultado = 0.0;

    for(int i=0; i<N; i++){

        printf("n1[%d]: ", i);
        scanf("%f", &array1[i]);

     while(array1[i] <= 0){

        printf("Entre com um valor positivo!");
        printf("\nn1[%d]: ", i);
        scanf("%f", &array1[i]);
    }

        printf("n2[%d]: ", i);
        scanf("%f", &array2[i]);

      while(array2[i] <= 0){

        printf("Entre com um valor positivo!");
        printf("\nn2[%d]: ", i);
        scanf("%f", &array2[i]);
    }
    }

    for(int i=0; i<N; i++){

        printf("%.2f, %.2f: ", array1[i], array2[i]);
        resultado = maiorValor(array1[i], array2[i]);

        if(resultado == -1){

            printf("Eles sao iguais.\n");
        }
        else if(resultado == 1){

            printf("O maior valor eh %.2f\n", array1[i]);
        }
        else if(resultado == 2){

            printf("O maior valor eh %.2f\n", array2[i]);
        }
    

    }


}



float maiorValor(float a, float b){
    if(a == b){
        return -1;
    }
    else {
        float valor = (a + b + abs(a-b))/2;

        if(valor == a){
            return 1;
        }
        else{
            return 2;
        }
    }
    
}