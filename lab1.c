/*Faça um programa que leia uma temperatura em graus Celsius
 e a converta para graus Fahrenheit. Fórmula: F = (1.8 * C + 32).*/

#include <stdio.h>
int main (){

 float gFahrenheit, gCelsius;

    printf("\n Digite a temperatura em Celsius\t");

    scanf("%f", &gCelsius);  

      gFahrenheit = ((1.8 * gCelsius ) +32 );

     printf( " %.0f", gFahrenheit);

    return 0;
}