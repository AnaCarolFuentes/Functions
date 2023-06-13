#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define  PI acos(-1)

/*Escreva um programa que leia o valor do raio de um círculo. O programa
deve calcular e imprimir a área e o perímetro do círculo representado por esse raio.
Para obter o valor da área do círculo o programa deverá chamar a função “areaCirculo”

e para obter o valor do seu perímetro o programa deverá invocar a função “circunfe-
renciaCirculo”. Para o valor de π, use o dialeto indicado no Capítulo sobre a biblioteca

matemática padrão.*/

float areaCirculo(float raio);
float circunferenciaCirculo(float raio);

int main(){

    float raio = 0.0;
    float area = 0.0;
    float perimetro = 0.0;

    printf("Raio: ");
    scanf("%f", &raio);

    area = areaCirculo(raio);
    perimetro = circunferenciaCirculo(raio);

    printf("Area = %.2f\n", area);
    printf("Circunferencia = %.2f\n", perimetro);


}

float areaCirculo(float raio){
    return (pow(raio, 2)) * PI;
}

float circunferenciaCirculo (float raio){
    return 2 * PI * raio;

}



