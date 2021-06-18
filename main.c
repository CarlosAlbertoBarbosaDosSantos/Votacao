#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int urna, secao, zona, x, i, candidato, y=0;
int votos[][10], posicao, k=0, contador=0;
int total_votos1=0, total_votos2=0, total_votos3=0, total_votos4=0, total_votos5=0, total_votos6=0, total_votos7=0;



int validacao_Secao(){

       system("cls");

       if(contador == 0){

        total_votos1 = total_votos1 + votos[k][3];
        total_votos2 = total_votos2 + votos[k][4];
        total_votos3 = total_votos3 + votos[k][5];
        total_votos4 = total_votos4 + votos[k][6];
        total_votos5 = total_votos5 + votos[k][7];
        total_votos6 = total_votos6 + votos[k][8];
        total_votos7 = total_votos7 + votos[k][9];


       }else{

       if(votos[k-1][0] == votos[contador][0]){


            for(i=0; i<1;i++){
            total_votos1 = total_votos1 + votos[k][3];
            total_votos2 = total_votos2 + votos[k][4];
            total_votos3 = total_votos3 + votos[k][5];
            total_votos4 = total_votos4 + votos[k][6];
            total_votos5 = total_votos5 + votos[k][7];
            total_votos6 = total_votos6 + votos[k][8];
            total_votos7 = total_votos7 + votos[k][9];


            }
         }else{

                total_votos1=0, total_votos2=0, total_votos3=0, total_votos4=0, total_votos5=0, total_votos6=0, total_votos7=0;

                for(i=0; i<1;i++){
                total_votos1 = total_votos1 + votos[k][3];
                total_votos2 = total_votos2 + votos[k][4];
                total_votos3 = total_votos3 + votos[k][5];
                total_votos4 = total_votos4 + votos[k][6];
                total_votos5 = total_votos5 + votos[k][7];
                total_votos6 = total_votos6 + votos[k][8];
                total_votos7 = total_votos7 + votos[k][9];

             }
         }


       }
        k += 1;
        contador = contador+1;


        printf("\n---------Resultado Parcial------------\n");
        printf("\n Zona eleitoral nº %d", zona);
        printf("\n Seção eleitoral nº %d", secao);
        printf("\n\n Total  de votos Candidatos: ");

        printf("\n\n Candidato 1: %d   |", total_votos1);
        printf(" Candidato 2: %d   |", total_votos2);
        printf("\n Candidato 3: %d   |", total_votos3);
        printf(" Candidato 4: %d   |", total_votos4);
        printf("\n Candidato 5: %d   |", total_votos5);
        printf("\n Votos Brancos: %d   |", total_votos6);
        printf(" Votos Nulos: %d   |", total_votos7);


}

int main()
{
    do{

        setlocale(LC_ALL, "Portuguese");
        printf("\n------------ELEIÇÕES 2021------------\n");

        printf("\n Candidatos:\n 1 João da Silva   \n 2 Tonhão do Caminhão");
        printf("\n 3 Antunes da Padaria   \n 4 Robertão o Bão  \n 5 Creison  \n 7 Voto em Branco\n");

        printf("-------------------------------------\n");

        printf(" Digite a Zona: ");
        scanf("%d", &zona);
        votos[k][0] = zona;
        printf(" Digite a Seção: ");
        scanf("%d", &secao);
        votos[k][1] = secao;
        printf(" Digite a Urna: ");
        scanf("%d", &urna);
        votos[k][2] = urna;

                printf("\n Digite a quantidade de votos do candidato 1: ");
                scanf("%d", &candidato);
                votos[k][3] = candidato;

                printf(" Digite a quantidade de votos do candidato 2: ");
                scanf("%d", &candidato);
                votos[k][4] = candidato;


                printf(" Digite a quantidade de votos do candidato 3: ");
                scanf("%d", &candidato);
                votos[k][5] = candidato;

                printf(" Digite a quantidade de votos do candidato 4: ");
                scanf("%d", &candidato);
                votos[k][6] = candidato;


                printf(" Digite a quantidade de votos do candidato 5: ");
                scanf("%d", &candidato);
                votos[k][7] = candidato;

                printf(" Digite a quantidade de votos Brancos: ");
                scanf("%d", &candidato);
                votos[k][8] = candidato;


                printf(" Digite a quantidade de votos nulos: ");
                scanf("%d", &candidato);
                votos[k][9] = candidato;

                validacao_Secao();

       printf("\n-------------------------------------\n");


        printf("\n Digite 1 para novos dados");
        printf("\n Digite 2 para concluir a eleição\n");
        scanf("%d", &x);
        if(x==1){
            system("cls");
        }else{
            printf("\n Votação encerrada!");
        }


        printf("\n-------------------------------------\n");

    }while( x == 1 );

}

