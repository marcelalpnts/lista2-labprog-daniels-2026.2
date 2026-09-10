/*Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido.
A condição de termino do programa ́e quando o usuário digitar zero.*/

#include <stdio.h>

int main (){

    int n, maior, menor, primeiro = 1;

    while (1) {

    puts("Escreva o valor n (ou 0 para sair):");
    scanf("%d", &n);

        if (n == 0){

            puts("Encerrando o programa...");

            break;
        }

        if (primeiro) {

            maior = n;
            menor = n;
            primeiro = 0; // sendo igual a 0, fica false e aí esse if nao acontecerá de novo.
        }
        if (n > maior) {

        maior = n;

        } 
    
        if (n < menor) {

        menor = n;

        } 

    
    } if (!primeiro) {

    printf("O maior termo fornecido foi %d e o menor foi %d.\n", maior, menor);
    
        }

    return 0;
}