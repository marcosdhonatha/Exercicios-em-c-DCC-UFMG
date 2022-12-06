/*Faça um programa que pegue um número do teclado e calcule a soma de todos os números
de 1 até ele*/

#include <stdio.h>
#include <stdlib.h>

 int main (){
 int numero, a1=0, resultado=a1;

     printf("\n Manda o numero ae meu chapa\t");
     scanf("%d", &numero);

  for (a1=0; a1<=numero; a1++)
    {
    resultado=resultado+a1;
    }

    printf("\n %d", resultado);

 return 0;
}