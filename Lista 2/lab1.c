/*Implemente um programa que imprima todos os termos da série dado n, e os termos x0 e
x1. Os outros termos da série serão:

 xn = 4*xn-1 -2*xn-2*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, X, x0,x1, xn= 2;
        
    printf("\n Digite na sequencia: o numero de termos da serie; o primeiro numero, e o segundo numero \t");
    scanf("%d %d %d", &n, &x0, &x1);

        printf("X0:%d\n", x0);
        printf("X1:%d\n", x1);

   while (xn<=n)
    {
      X= (4*x1)+(-2*x0);

      printf("X%d:%d\n", xn, X);

    xn++;
    x0=x1;
    x1=X;

    };


    return 0;
}