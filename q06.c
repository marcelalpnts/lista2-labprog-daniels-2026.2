/*Escreva um programa que transforme o computador em uma urna eletrˆonica para elei ̧c ̃ao para pre-
sidente de um certo pa ́ıs, `as quais concorrem os candidatos 5-Paulo e 7-Renata. Cada voto deve ser
dado pelo n ́umero do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto
diferente dos j ́a citados  ́e considerado nulo; em qualquer situação, o eleitor deve ser consultado quanto
`a confirma ̧c ̃ao do seu voto. No final da elei ̧c ̃ao o programa deve emitir um relat ́orio contendo as por-
centagens de vota ̧c ̃ao de cada candidato, votos em branco, votos nulos e o candidato eleito. Obs.: O
c ́odigo para finalizar a urna (vota ̧c ̃ao)  ́e o usu ́ario digitar algum n ́umero negativo.*/

#include <stdio.h>
int main () {

    int vPaulo = 0, vRenata = 0, VNulo = 0, VBranco = 0, TotalVotos = 0, Voto;
    float Ppaulo, Prenata, Pnulo, Pbranco;

    do {

    puts("============ URNA ELETRONICA ============");
    puts("ESCOLHA SEU CANDIDATO POR MEIO DAS OPÇÕES");
    puts("(5) PAULO  (7) RENATA  (0)BRANCO  (-)SAIR");
    puts("OBS:Escreva um número negativo para sair.");
    scanf("%d", &Voto);

    int Confirma = 1;

    if (Voto < 0) {

        puts("VOCẼ SOLICITOU PARA SAIR");
        puts("CONFIRMA (1)SIM (0)NAO");
        scanf("%d", &Confirma);

        if (Confirma) { 
            break;
        } else {
            puts("Esse voto não será contabilizado e vocẽ terá que votar novamente");
            Voto = -1*Voto;
            continue;
        }

    }

    switch (Voto) {
    case 5:
        puts("Você votou no candidato PAULO.");
        puts("CONFIRMA (1)SIM (0)NAO");
        scanf("%d", &Confirma);
        if (Confirma) {
            TotalVotos += 1;
            vPaulo +=1;
        }
        break;

    case 7:
        puts("Você votou na candidata RENATA.");
        puts("CONFIRMA (1)SIM (0)NAO");
        scanf("%d", &Confirma);
        if (Confirma) {
            TotalVotos += 1;
            vRenata +=1;
        }
        break;

    case 0:
        puts("Você votou BRANCO");
        puts("CONFIRMA (1)SIM (0)NAO");
        scanf("%d", &Confirma);
        if (Confirma) {
            TotalVotos += 1;
            VBranco +=1;
        }
        break;
    
    default: 
        puts("Você votou NULO");
        puts("CONFIRMA (1)SIM (0)NAO");
        scanf("%d", &Confirma);
        if (Confirma) {
            TotalVotos += 1;
            VNulo +=1;
        }
        break;
    }

} while (Voto >= 0);


    if (TotalVotos > 0) {

        printf("Total de Votos = %d\nVotos no candidato Paulo:%d\nVotos na candidata Renata:%d\nVotos nulos:%d\nVotos brancos:%d\n", TotalVotos,vPaulo,vRenata,VNulo,VBranco);

    //porcentagem dos votos 

    Ppaulo = ((float)vPaulo/TotalVotos)*100.00;
    Prenata = ((float)vRenata/TotalVotos)*100.00;
    Pbranco = ((float)VBranco/TotalVotos)*100.00;
    Pnulo = ((float)VNulo/TotalVotos)*100.00;

    printf("Paulo obteve o percentual:%.2f%%\nRenata obteve o percentual:%.2f%%\nJa a porcentagem de votos brancos e nulos foi, %.2f%% e %.2f%%, respectivamente.",Ppaulo, Prenata, Pbranco, Pnulo);
    
        if (vPaulo > vRenata) {

        puts("Paulo é o novo presidente.");

    } else if (vRenata > vPaulo) { 

        puts("Renata é a nova presidente.");

    } else {

        puts("Nenhum candidato foi eleito.");
    }
   
} else {
    puts("Nenhum voto foi registrado.");}
    
    return 0;
}


