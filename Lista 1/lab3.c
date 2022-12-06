/* Programa que captura a entrada de tres numeros digitados pelo usuario e diz se o primeiro é divisível pelo segundo e pelo terceiro*/

#include <stdio.h>
#include <stdlib.h>

int main(){
int x, y, z, divisao2, divisao1;

   printf("\n Digite o primeiro numero ");
   scanf("%d", &x);

   printf("\n Digite o segundo numero ");
   scanf("%d", &y);

   printf("\n Digite o ultimo numero ");
   scanf("%d", &z);
 
 
 
  divisao1= x%y;
  divisao2= x%z;
        
       if (divisao1 <1 && divisao2 <1) {
         printf(" \n O número é divisível");

         }
      else
       printf( " \n O número não é divisível ");


return 0;

}