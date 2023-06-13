#include <stdio.h>
#include <stdlib.h>

#define N 5 

/*Escreva um programa que leia 5 pares de valores decimais. Todos os
valores lidos devem ser positivos. Caso um valor menor ou igual a zero for fornecido,
esse valor deve ser lido novamente. Para cada par lido deve ser impresso o valor do
maior elemento do par ou a frase “Eles sao iguais” se os valores do par forem iguais.
Para obter o maior elemento do par utilize a função “maiorNumero”.*/

float maiorNumero(float numero1, float numero2){
    
    if(numero1 > numero2){
        return numero1;
    }
    else if(numero1 == numero2){
        return -1;
    }
    else{
        return numero2;
    }
}


int main(){

    float array1[N]= {0};
    float array2[N] = {0};
    float resultado = 0;


    for(int i = 0; i<N; i++){
            
            printf("n[%d]: ", i);
            scanf("%f", &array1[i]);

            do{
                printf("Entre com um valor positivo: ");
            } while(array1[i] <= 0);

            printf("n[%d]: ", i);
            scanf("%f", &array2[i]);

            do{
                printf("Entre com um valor positivo: ");
            } while(array2[i] <= 0);

    }

    for(int i =0; i<N; i++){

        resultado = (array1[i], array2[i]);
        if(resultado == -1){

            printf("Eles sao iguais.");
        } 
        else{
            printf("O maior valor eh %.2f", resultado);
        }
    }

    



}