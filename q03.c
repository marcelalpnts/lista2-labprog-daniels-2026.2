//Q3) Escreva um programa que leia um n ́umero inteiro e positivo F e calcule o fatorial deste n ́umero.

#include <stdio.h>

int main (){
    unsigned int F, fatorial = 1;
    puts ("Escreva o inteiro que será calculado o fatorial: \n");
    scanf("%u", &F);

    for (int i=1 ; i<=F; i++){
        fatorial = fatorial * i;
    }

    printf("%u! = %u", F,fatorial);

    return 0;
}