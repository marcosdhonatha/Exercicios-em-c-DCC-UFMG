/*Faça um programa que lê 3 valores inteiros e imprima o maior deles*/

#include <stdio.h>
#include <stdlib.h>

    int main () {
     
    int numero1, numero2, numero3;

    
         printf( "\n Digite tres numeros\t");
         scanf( "%d %d %d", &numero1, &numero2, &numero3);
         printf("\n");
 ////////////////////////////////
         if (numero1 > numero2)
         {
              if (numero1 > numero3)
              {
                   printf("%d", numero1);
              }
              else
                   printf("%d", numero3);
         }
         else if (numero2 > numero1)
         {
              if (numero2 > numero3)
              {
                   printf("%d", numero2);
              }
              else
                   printf("%d", numero3);
         }

    //////////////////////////////////////////////////////
  /*   if (numero1 >= numero2 && numero1 >= numero3)
         {
         printf ("%d", numero1);
         } 
    else if (numero2 >= numero1 && numero2 >= numero3) 
         {
          printf ("%d", numero2); 
         } 
    else {
           printf("%d", numero3);*/

    return 0;
         }
  


 
  