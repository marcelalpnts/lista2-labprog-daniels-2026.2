/*Q02: Repita a questão 01, utilizando a estrutura de repetição com teste no final*/

#include <stdio.h> 

int main (){

    unsigned char dia;

    do {
        puts("Digite um numero de 1 a 7 para saber o dia da semana ou 0 para sair: ");
        scanf("%hhu", &dia);

        switch (dia) {
            case 1:
                puts("Domingo \n");
                break;
            case 2:
                puts("Segunda-feira \n");
                break;
            case 3:
                puts("Terça-feira \n");
                break;
            case 4:
                puts("Quarta-feira \n");
                break;
            case 5:
                puts("Quinta-feira \n");
                break;
            case 6:
                puts("Sexta-feira \n");
                break;
            case 7:
                puts("Sábado \n");
                break;
            default:
                if (dia != 0) {
                    puts("Número de dia não válido \n");
                }
        }

    } while (dia !=0);
    return 0;
}