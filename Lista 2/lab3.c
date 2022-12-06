/* Faça um programa que mostre uma contagem na tela de 233 a 457, só que contando de 3
em 3 quando estiver entre 300 e 400 e de 5 em 5 quando não estiver.*/

#include <stdio.h>
#include <stdlib.h>
int main (){

 int comece=233, fim=457; 

    while (comece<=fim)
    {
        if (comece>300 && comece<400 )
            {
                printf("%d \t", comece);
                comece= comece+3;
            }
   
        else if (comece>=233 && comece<=300 || comece>=400)
            { 
                printf("%d \t", comece);
                comece= comece +5;
            }

    }

  return 0;
}