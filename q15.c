/*Elaborar um programa que apresente os resultados das potências do valor de base 3, elevado a um
expoente que varie do valor 0 a 7.*/

#include <stdio.h>


int main (){
    
    int pot = 1;

    for(int i = 0; i <= 7; i++) {

        printf("3 elevado a %d = %d\n", i, pot);
        pot = pot*3;
    }

    return 0;
}
