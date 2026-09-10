/*q04)Implementar um programa para resolver o seguinte problema: Jos ́e tem 150 cent ́ımetros e cresce 2
cent ́ımetros por ano. O Pedro tem 110 cent ́ımetros e cresce 3 cent ́ımetros por ano. Em quantos anos
Pedro será maior que José*/

#include <stdio.h>
#define JOSE 150
#define PEDRO 110

int main (){

    int alturaP = PEDRO, alturaJ = JOSE, ano;

    for (ano = 0; alturaP <= alturaJ; ano++) {

        alturaP += 3;
        alturaJ += 2;
    }
    
    printf("Pedro será maior que José em %d anos. \n", ano);
    
    return 0;
}