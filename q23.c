/*Escreva um programa que mostre a diferença entre pré-incrementar e pós-incrementar usando o ope-
rador –.*/

#include <stdio.h>

int main (){
    // suponha um inteiro i = 10 e um inteiro y = 10;
    int i = 10, y = 10;
    int pre, pos;

    pre = --i; // pré-incrementando
    pos = y--; // pós-incrementando

    printf ("O novo resultado de i = %d, e de y = %d\n", pre, pos);

    return 0;
}