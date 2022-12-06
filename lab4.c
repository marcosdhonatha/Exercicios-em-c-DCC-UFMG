/* Considerando a existência de notas (cédulas) nos valores R$ 100, R$ 50, R$ 20, R$
10, R$ 5, R$ 2 e R$ 1, escreva um programa que capture um valor inteiro em reais
(R$) e determine o menor número de notas para se obter o montante fornecido. O
programa deve exibir o número de notas para cada um dos valores de nota existentes.*/

#include <stdio.h>
#include <stdlib.h>
int main () {
int grana, pexin, onca, mamaco,garca, arara, tortuguita, moeda;

    printf("\n Digite a quantidade de dinheiro \t");
    scanf("%d", & grana);

pexin=0;
onca=0;
mamaco=0;
garca=0;
arara=0;
tortuguita=0;
moeda=0;


         while (grana >= 100)
           {
             pexin +=1;
             grana = grana - 100 ;
           }
         while (grana>=50)
            {
            onca+=1;
            grana = grana - 50;
            }

         while (grana>=20)
            {
            mamaco+=1;
            grana= grana -20;
            }

         while (grana>=10)
            {
            arara+=1;
            grana= grana -10;
            }

         while (grana>=5)
            {
            garca+=1;
            grana= grana-5;
            }

         while (grana>=2)
            {
            tortuguita+=1;
            grana= grana-2;
            }

         while (grana>=1)
            {
            moeda+=1;
            grana=-1;
            }


printf("\n \t");


    printf("100: %d \n \t", pexin);
    printf("50: %d\n\t", onca);
    printf("20: %d\n\t", mamaco);
    printf("10 :%d\n\t", arara);
    printf("5: %d\n\t", garca);
    printf("2: %d\n\t", tortuguita);
    printf("1: %d\n\t", moeda);




return 0;


}