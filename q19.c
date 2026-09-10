/*Elaborar um programa que apresente a média aritmética dos números inteiros existentes entre uma
faixa especificada pelo usuário.*/

#include <stdio.h>

int main (){

    int a, b;
    float soma = 0.0, mediaA;
    puts("Escreva o primeiro inteiro");
    scanf("%d", &a);
    puts("Escreva o segundo inteiro");
    scanf("%d", &b);

    if (a > b){

        int aux;
        aux = a;
        a = b;
        b = aux;

    }
    for (int i = a; i <= b; i++){
        soma += i;
    }

    mediaA = soma / (b-a+1);

    printf("A média aritmética do intervalo é %.2f\n", mediaA);

    return 0;
}