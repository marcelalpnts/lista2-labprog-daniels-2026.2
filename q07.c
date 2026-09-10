/*Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo (zero). Escreva
um programa para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo. OBS: O
programa deve validar a leitura do segundo valor (que não deve ser nulo). Enquanto for fornecido um
valor nulo a leitura deve ser repetida.*/

#include <stdio.h>

int main (){

    float a, b;

    puts("Insira o valor do primero número:");
    scanf("%f", &a);

    puts("Insira o valor do segundo número (!=0):");

    while (1)
    {
        scanf("%f", &b);
        if (b != 0) break;
        puts("Tente novamente!");   
    }
    

    printf("O resultado válido da divisão é %.2f \n", a/b);
    

    return 0;
}