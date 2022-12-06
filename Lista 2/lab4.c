/*Faça um programa que compute quantos são os múltiplos de 2, de 3 e de 5 entre 1 e X ;
compute também quantos são os números múltiplos de 2, 3 e 5 ao mesmo tempo. */

#include <stdio.h>
#include <stdlib.h>

int main (){

int mult2=0, mult3=0, mult5=0, multTodos=0, x, comeco=1;



printf("Digite o numero a ser computado:\t");

scanf("%d", &x);

    while (comeco<=x)
     {
          if (comeco%2==0 && comeco%3==0 && comeco%5==0)
          { //Caso o número for multíplo de todos ao mesmo tempo, aumenta-se o contador de todas as variáveis.
              multTodos++;
              mult2++;
              mult3++;
              mult5++;
             }

          else if (comeco%2==0 && comeco%3==0)
           {//Se o número for multíplo de 2 e 3 ao mesmo tempo, aumenta-se o contador de ambas variáveis.
              mult2++;
              mult3++;
             }

          else if (comeco%2==0 && comeco%5==0)
           {//Se o número for multíplo de 2 e 5 ao mesmo tempo, aumenta-se o contador de ambas variáveis.
              mult2++;
              mult5++;
             }
  
          else if (comeco%3==0 && comeco%5==0)
           {//Se o número for multíplo de 3 e 5 ao mesmo tempo, aumenta-se o contador de ambas variáveis.
              mult5++;
              mult3++;
             }
  
          else if (comeco%2==0  )
           {//Se o número for multíplo de 2, aumenta-se o contador da sua variável.
             mult2++;
             }

          else if (comeco%3==0)
           {//Se o número for multíplo de 3, aumenta-se o contador da sua variável.
             mult3++;
            }
  
          else if (comeco%5==0)
           {//Se o número for multíplo de 5, aumenta-se o contador da sua variável.
             mult5++;
            }
            
      //ao final de todos os "IF´s" aumenta-se o contador da variável principal e o laço continua.
      comeco++;
  
}



   printf("\n Múltiplos de 2:\t %d", mult2);
   printf("\n Múltiplos de 3:\t %d", mult3);
   printf("\n Múltiplos de 5:\t %d", mult5);
   printf("\n Múltiplos de todos:\t %d", multTodos);




    return 0;
}