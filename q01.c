/* Q01)Implemente um programa que tenha como entrada um numero (1-7) que corresponde a um dos dias da semana e imprima na tela o nome do dia correspondente (domingo, segunda,terça, quarta, quinta, sexta, sabado). Se o numero lido não estiver no intervalo 1-7, imprima: “Número de dia número não válido”. O programa deve permanecer executando at ́e que o usu ́ario tecle o numero 0. (Utilize obrigatoriamente teste no inicio).*/

#include <stdio.h> 

int main (){

    unsigned char dia;

    puts("Digite um numero de 1 a 7 para saber o dia da semana ou 0 para sair: ");
    scanf("%hhu", &dia);

    while (dia != 0 )
    {
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
                puts("Número de dia não válido \n");
                break;
        }

        puts("Digite um numero de 1 a 7 para saber o dia da semana ou 0 para sair: ");
        scanf("%hhu", &dia);
    }
    
    return 0;
}