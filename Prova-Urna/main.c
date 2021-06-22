#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int urna, secao, zona=0, x, i, candidato, y=0, primeiro, segundo, resultado [5];
int votos[][10], posicao, k=0, contador=0, total=0, total1=0;
int total_votos1=0, total_votos2=0, total_votos3=0, total_votos4=0, total_votos5=0, total_votos6=0, total_votos7=0;
float percentual1=0, percentual2=0, percentual3=0, percentual4=0, percentual5=0, percentual6=0, percentual7=0, s1;
float percentual1A, percentual2A, percentual3A, percentual4A, percentual5A, percentual6A, percentual7A;
int cand1, cand2, cand3, cand4, cand5, bran, nulo;


int resultado_Final()
{
    setlocale(LC_ALL, "Portuguese");
    for(i=0; i<contador; i++)
    {
        cand1 = cand1 + votos[i][3];
        cand2 = cand2 + votos[i][4];
        cand3 = cand3 + votos[i][5];
        cand4 = cand4 + votos[i][6];
        cand5 = cand5 + votos[i][7];
        bran = bran + votos[i][8];
        nulo = nulo + votos[i][9];
    }

    resultado[0]= cand1;
    resultado[1]= cand2;
    resultado[2]= cand3;
    resultado[3]= cand4;
    resultado[4]= cand5;

    for(i=0 ; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(resultado[i]<=resultado[j])
            {
                primeiro=resultado[i];
                resultado[i]= resultado[j];
                resultado[j]=primeiro;
            }
        }
    }

    system("cls");

    printf("\n------------Trabalho urna eleitoral------------\n");
    printf("\n Integrantes:\n");
    printf("\n Carlos Alberto Barbosa dos Santos RA: 2019100268");
    printf("\n João Guilherme RA: 2019208261");
    printf("\n Patrick Pascoal Ribeiro RA: 2019291084");
    printf("\n\n--------------Resultado da votação---------------\n\n");

    printf ("\n Votos do candidato 1 -> %d     percentual: %.2f%%", cand1, percentual1);
    printf ("\n Votos do candidato 2 -> %d     percentual: %.2f%%", cand2, percentual2);
    printf ("\n Votos do candidato 3 -> %d     percentual: %.2f%%", cand3, percentual3);
    printf ("\n Votos do candidato 4 -> %d     percentual: %.2f%%", cand4, percentual4);
    printf ("\n Votos do candidato 5 -> %d     percentual: %.2f%%", cand5, percentual5);
    printf ("\n Votos Brancos:  -> %d     percentual: %.2f%%", bran, percentual6);
    printf ("\n Votos Nulos -> %d     percentual: %.2f%%", nulo, percentual7);

    printf("\n--------------Eleitos---------------\n");
    if(cand1 == resultado[0])
    {
        printf ("\n Candidato 1 foi eleito");
    }
    else{
        if(cand2==resultado[0])
        {
            printf ("\n Candidato 2 foi eleito");
        }
        else
        {
            if(cand3==resultado[0])
            {
                printf ("\n Candidato 3 foi eleito");

            }
            else
            {
                if(cand4 == resultado[0])
                {
                    printf ("\n Candidato 4 foi eleito");
                }
                else
                {
                    if(cand5 == resultado[0])
                    {
                        printf ("\n Candidato 5 foi eleito");
                    }
                }
            }
        }
    }
    if(cand1 == resultado[1])
    {
        printf ("\n Candidato 1 foi vice");
    }
    else
    {
        if(cand2==resultado[1])
        {
            printf ("\n Candidato 2 foi vice");
        }
        else
        {
            if(cand3==resultado[1])
            {
                printf ("\n Candidato 3 foi vice");

            }
            else
            {
                if(cand4 == resultado[1])
                {
                    printf ("\n Candidato 4 foi vice");
                }
                else
                {
                    if(cand5 == resultado[1])
                    {
                        printf ("\n Candidato 5 foi vice");
                    }

                }
            }
        }
    }



}

int percentual_Individual()
{
    total1=0;
    total1 = votos[k][3] + votos[k][4] + votos[k][5] + votos[k][6] + votos[k][7] + votos[k][8] + votos[k][9];
    percentual1A=0, percentual2A=0, percentual3A=0, percentual4A=0, percentual5A=0, percentual6A=0, percentual7A=0;


    percentual1A = ((float)votos[k][3]/(float)total1)*100;
    percentual2A = ((float)votos[k][4]/(float)total1)*100;
    percentual3A = ((float)votos[k][5]/(float)total1)*100;
    percentual4A = ((float)votos[k][6]/(float)total1)*100;
    percentual5A = ((float)votos[k][7]/(float)total1)*100;
    percentual6A = ((float)votos[k][8]/(float)total1)*100;
    percentual7A = ((float)votos[k][9]/(float)total1)*100;


}
int percentual_Total()
{


    total = total_votos1 + total_votos2 + total_votos3 + total_votos4 + total_votos5 + total_votos6 + total_votos7;

    percentual1 = ((float)total_votos1/(float)total)*100;
    percentual2 = ((float)total_votos2/(float)total)*100;
    percentual3 = ((float)total_votos3/(float)total)*100;
    percentual4 = ((float)total_votos4/(float)total)*100;
    percentual5 = ((float)total_votos5/(float)total)*100;
    percentual6 = ((float)total_votos6/(float)total)*100;
    percentual7 = ((float)total_votos7/(float)total)*100;

    k = k + 1;

}

int validacao_SecaoZona()
{

    system("cls");

    if(votos[k-1][0] == votos[contador][0] && votos[k-1][1] == votos[contador][1])
    {
        total_votos1 = total_votos1 + votos[k][3];
        total_votos2 = total_votos2 + votos[k][4];
        total_votos3 = total_votos3 + votos[k][5];
        total_votos4 = total_votos4 + votos[k][6];
        total_votos5 = total_votos5 + votos[k][7];
        total_votos6 = total_votos6 + votos[k][8];
        total_votos7 = total_votos7 + votos[k][9];

        percentual_Individual();
        percentual_Total();

    }
    else
    {

        total_votos1=0, total_votos2=0, total_votos3=0, total_votos4=0, total_votos5=0, total_votos6=0, total_votos7=0;
        total_votos1 = total_votos1 + votos[k][3];
        total_votos2 = total_votos2 + votos[k][4];
        total_votos3 = total_votos3 + votos[k][5];
        total_votos4 = total_votos4 + votos[k][6];
        total_votos5 = total_votos5 + votos[k][7];
        total_votos6 = total_votos6 + votos[k][8];
        total_votos7 = total_votos7 + votos[k][9];

        percentual_Individual();
        percentual_Total();

    }

    contador = contador+1;


    printf("\n---------Resultados----------------\n");

    printf("\n Zona eleitoral nº %d", zona);
    printf("\n Seção eleitoral nº %d", secao);

    printf("\n\n Total  de votos Candidatos urna: %d", urna);

    printf("\n\n Candidato 1-> votos: %d   percentual: %.2f%%  ", votos[k-1][3], percentual1A );
    printf("\n Candidato 2-> votos: %d   percentual: %.2f%%   ", votos[k-1][4], percentual2A);
    printf("\n Candidato 3-> votos: %d   percentual: %.2f%%  ", votos[k-1][5], percentual3A);
    printf("\n Candidato 4-> votos: %d   percentual: %.2f%%  ", votos[k-1][6], percentual4A);
    printf("\n Candidato 5-> votos: %d   percentual: %.2f%%   ", votos[k-1][7], percentual5A );
    printf("\n Votos Brancos-> votos-> %d  percentual: %.2f%%   ", votos[k-1][8], percentual6A);
    printf("\n Votos Nulos-> votos: %d   percentual: %.2f%%  ", votos[k-1][9], percentual7A );


    printf("\n\n ---------Resultado Parcial Total------------\n ");

    printf("\n Candidato 1-> votos: %d  percentual: %.2f%%  ", total_votos1, percentual1 );
    printf("\n Candidato 2-> votos: %d   percentual: %.2f%%   ", total_votos2, percentual2);
    printf("\n Candidato 3-> votos: %d    percentual: %.2f%%  ", total_votos3, percentual3);
    printf("\n Candidato 4-> votos: %d    percentual: %.2f%%  ", total_votos4, percentual4);
    printf("\n Candidato 5-> votos: %d   percentual: %.2f%%   ", total_votos5, percentual5);
    printf("\n Votos Brancos-> votos: %d  percentual: %.2f%%   ", total_votos6, percentual6);
    printf("\n Votos Nulos-> votos: %d   percentual: %.2f%%  ", total_votos7, percentual7);

}

int validacao_Zona()
{

    system("cls");

    if(contador == 0)
    {

        total_votos1 = total_votos1 + votos[k][3];
        total_votos2 = total_votos2 + votos[k][4];
        total_votos3 = total_votos3 + votos[k][5];
        total_votos4 = total_votos4 + votos[k][6];
        total_votos5 = total_votos5 + votos[k][7];
        total_votos6 = total_votos6 + votos[k][8];
        total_votos7 = total_votos7 + votos[k][9];

        percentual_Individual();
        percentual_Total();

    }
    else
    {

        if(votos[k-1][0] == votos[contador][0])
        {

            total_votos1 = total_votos1 + votos[k][3];
            total_votos2 = total_votos2 + votos[k][4];
            total_votos3 = total_votos3 + votos[k][5];
            total_votos4 = total_votos4 + votos[k][6];
            total_votos5 = total_votos5 + votos[k][7];
            total_votos6 = total_votos6 + votos[k][8];
            total_votos7 = total_votos7 + votos[k][9];

            percentual_Individual();
            percentual_Total();

        }
        else
        {

            total_votos1=0, total_votos2=0, total_votos3=0, total_votos4=0, total_votos5=0, total_votos6=0, total_votos7=0;

            total_votos1 = total_votos1 + votos[k][3];
            total_votos2 = total_votos2 + votos[k][4];
            total_votos3 = total_votos3 + votos[k][5];
            total_votos4 = total_votos4 + votos[k][6];
            total_votos5 = total_votos5 + votos[k][7];
            total_votos6 = total_votos6 + votos[k][8];
            total_votos7 = total_votos7 + votos[k][9];

            percentual_Individual();
            percentual_Total();

        }


    }

    contador = contador+1;

    printf("\n---------Resultados----------------\n");
    printf("\n Zona eleitoral nº %d", zona);
    printf("\n Seção eleitoral nº %d", secao);

    printf("\n\n Total  de votos Candidatos urna: %d", urna);

    printf("\n\n Candidato 1-> votos: %d   percentual: %.2f%%  ", votos[k-1][3], percentual1A );
    printf("\n Candidato 2-> votos: %d   percentual: %.2f%%   ", votos[k-1][4], percentual2A);
    printf("\n Candidato 3-> votos: %d   percentual: %.2f%%  ", votos[k-1][5], percentual3A);
    printf("\n Candidato 4-> votos: %d   percentual: %.2f%%  ", votos[k-1][6], percentual4A);
    printf("\n Candidato 5-> votos: %d   percentual: %.2f%%   ", votos[k-1][7], percentual5A );
    printf("\n Votos Brancos-> votos-> %d  percentual: %.2f%%   ", votos[k-1][8], percentual6A);
    printf("\n Votos Nulos-> votos: %d   percentual: %.2f%%  ", votos[k-1][9], percentual7A );


    printf("\n\n ---------Resultado Parcial Total------------\n ");

    printf("\n Candidato 1-> votos: %d  percentual: %.2f%%  ", total_votos1, percentual1 );
    printf("\n Candidato 2-> votos: %d   percentual: %.2f%%   ", total_votos2, percentual2);
    printf("\n Candidato 3-> votos: %d    percentual: %.2f%%  ", total_votos3, percentual3);
    printf("\n Candidato 4-> votos: %d    percentual: %.2f%%  ", total_votos4, percentual4);
    printf("\n Candidato 5-> votos: %d   percentual: %.2f%%   ", total_votos5, percentual5);
    printf("\n Votos Brancos-> votos: %d  percentual: %.2f%%   ", total_votos6, percentual6);
    printf("\n Votos Nulos-> votos: %d   percentual: %.2f%%  ", total_votos7, percentual7);



}

int main()
{

    setlocale(LC_ALL, "Portuguese");

    printf("\n------------Trabalho urna eleitoral------------\n");
    printf("\n Integrantes:");
    printf("\n Carlos Alberto Barbosa dos Santos RA: 2019100268");
    printf("\n João Guilherme RA: 2019208261");
    printf("\n Patrick Pascoal Ribeiro RA: 2019291084\n");


    do
    {


        secao=0;
        setlocale(LC_ALL, "Portuguese");
        printf("\n------------ELEIÇÕES 2021------------\n");

        printf("\n Candidatos:\n 1 João da Silva   \n 2 Tonhão do Caminhão");
        printf("\n 3 Antunes da Padaria   \n 4 Robertão o Bão  \n 5 Creison  \n 6 Votos Brancos \n 7 Voto Nulos\n");

        printf("-------------------------------------\n");
        zona = 0;
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

        if(contador == 0)
        {
            validacao_Zona();
        }
        else
        {
            if(votos[k-1][0] == votos[contador][0] && votos[k-1][1] == votos[contador][1])
            {
                validacao_SecaoZona();
            }
            else
            {
                validacao_Zona();
            }
        }

        printf("\n-------------------------------------\n");

        printf("\n Digite 1 para novos dados");
        printf("\n Digite 2 para concluir a eleição\n");
        printf("\n Valor digitado: ");
        scanf("%d", &x);
        if(x==1)
        {

            system("cls");
        }
        else
        {
            printf("\n-------------------------------------\n\n");
            printf("\n Votação encerrada!");
            printf("\n Apuração de votos!");
            resultado_Final();

        }

        printf("\n-------------------------------------\n");

    }
    while( x == 1 );

}

