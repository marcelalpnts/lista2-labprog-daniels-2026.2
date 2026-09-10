/*Elaborar um programa que mostre os resultados da tabuada de um número inteiro qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional.*/

#include <stdio.h>

int main (){
    int a;

    puts("Escreva o inteiro a ser analizado:");
    scanf("%d", &a);

//OBS: a tabuada tradicional de um inteiro vai de 0 a 10.
    printf("=========TABUADA DO %d=========\n",a);

    for (int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", a, i, a*i);
    }

    return 0;
}
