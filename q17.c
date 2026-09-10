/*Elaborar um programa que apresente os valores de conversão de graus Celsius em graus Fahrenheit,
de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O
programa deve apresentar os valores das duas temperaturas. Obs.: Pesquise a fórmula de conversão.*/

#include <stdio.h>

int main (){
    int fahrenheit, celcius = 10;

    puts("=======CONVERSÃO DE CELCIUS PARA FAHRENHEIT=======");
    for(int i=1; i<=10; i++){

        fahrenheit = (10/5 * i * 9) + 32;

        printf("%d°C = %d°F \n", i*10, fahrenheit);
    }

    return 0;
}