#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 3

int soma()
{

    int ordemA, ordemB, i, j;
    char ch;
    int matrizA[100][100];
    int matrizB[100][100];
    int matrizAB[100][100];

    do
    {
        system("CLS");

        printf("\t\tSOMA DE MATRIZES\t\t\n");
        printf("\n");

        printf(" Insira a ordem da matrizA: ");
        scanf("%d", &ordemA);
        printf("\n");

        printf(" Insira a ordem da matrizB: ");
        scanf("%d", &ordemB);
        printf("\n");

        if(ordemA != ordemB)
        {
            printf("Nao pode somar matrizes de ordens diferentes\n");
        }
        else
        {
            for(i = 0; i < ordemA; i++)
            {
                for(j = 0; j < ordemA; j++)
                {
                    printf("Elementos da MatrizA [%d][%d]: ", i, j);
                    scanf("%d", &matrizA[i][j]);
                }
            }
            printf("\n");

            for(i = 0; i < ordemB; i++)
            {
                for(j = 0; j < ordemB; j++)
                {
                    printf("Elementos da MatrizB [%d][%d]: ", i, j);
                    scanf("%d", &matrizB[i][j]);
                }

            }
            printf("\n\n");
            printf("#---------------------------- 1- MatrizA Gerada ---------------------------------#\n\n");
            printf("MatrizA:\n");
            for(i = 0; i < ordemA; i++)
            {
                for(j = 0; j < ordemA; j++)
                {
                    printf("%d\t", matrizA[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            printf("#---------------------------- 2- MatrizB Gerada ---------------------------------#\n\n");
            printf("MatrizB:\n");
            for(i = 0; i < ordemB; i++)
            {
                for(j = 0; j < ordemB; j++)
                {
                    printf("%d\t", matrizB[i][j]);
                }
                printf("\n");
            }
            printf("\n");

            for(i = 0; i < ordemA; i++)
            {
                for(j = 0; j < ordemB; j++)
                {
                    matrizAB[i][j] = matrizA[i][j] + matrizB[i][j];
                }
            }
            printf("#---------------------------- 3- MatrizA+B Gerada ---------------------------------#\n\n");
            printf("MatrizA + MatrizB = MatrizAB");
            printf("\n");
            printf("MatrizAB:\n");
            for(i = 0; i < ordemA; i++)
            {
                for(j = 0; j < ordemB; j++)
                {
                    printf("%d\t", matrizAB[i][j]);
                }
                printf("\n");
            }
        }
        printf("\n");

        printf("\nRetir? (s/n)?\n\n");
        ch = getch();
    }while((ch != 'n') && (ch != 'N'));


    return 0;
}

int multiplicacao()
{
    int linha1, coluna1, i, j;
    char ch;
    int linha2, coluna2, x, aux = 0;
    int matrizA[100][100];
    int matrizB[100][100];
    int matriz[100][100];

    do
    {
        system("CLS");

        printf("\t\tMULTIPLICAÇÃO DE MATRIZES:\t\t\n", setlocale(LC_ALL,""));
        printf("\n");
        printf(" Insira o nº de linhas na matriz A: ");
        scanf("%d", &linha1);
        printf(" Insira o nº de colunas na matriz A: ");
        scanf("%d", &coluna1);
        printf("\n");

        printf("\n");
        printf(" Insira o nº de linhas na matriz B: ");
        scanf("%d", &linha2);
        printf(" Insira o nº de colunas na matriz B: ");
        scanf("%d", &coluna2);
        printf("\n");

        if(coluna1 != linha2)
        {
            printf(" Não há como multiplicar as matrizes dadas\n", setlocale(LC_ALL,""));
            printf("\n");
        }
        else if(coluna1 == linha2)
        {

            for(i = 0; i < linha1; i++)
            {
                for(j = 0; j < coluna1; j++)
                {
                    printf(" Elementos da Matriz A[%d][%d]: ", i, j);
                    scanf("%d", &matrizA[i][j]);
                }
            }
            printf("\n");

            for(i = 0; i < linha2; i++)
            {
                for(j = 0; j < coluna2; j++)
                {
                    printf(" Elementos da Matriz B[%d][%d]: ", i, j);
                    scanf("%d", &matrizB[i][j]);
                }
            }

            for(i = 0; i < linha1; i++)
            {
                for(j = 0; j < coluna2; j++)
                {
                    matriz[i][j] = 0;
                    for(x = 0; x < coluna2; x++)
                    {
                        aux += matrizA[i][x] * matrizB[x][j];
                    }

                    matriz[i][j] = aux;
                    aux = 0;
                }
            }
            printf("#---------------------------- 1- MatrizA Gerada ---------------------------------#\n\n");
            printf("MatrizA:\n");
            for(i = 0; i < linha1; i++)
            {
                for(j = 0; j < coluna1; j++)
                {
                    printf("%d\t", matrizA[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            printf("#---------------------------- 2- MatrizB Gerada ---------------------------------#\n\n");
            printf("MatrizB:\n");
            for(i = 0; i < linha2; i++)
            {
                for(j = 0; j < coluna2; j++)
                {
                    printf("%d\t", matrizB[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            printf("#----------------------------- 3- MatrizAxB Gerada ------------------------------#\n\n");
            printf("MatrizAB:\n");
            for(i = 0; i < linha1; i++)
            {
                for(j = 0; j < coluna2; j++)
                {
                    printf("%d\t", matriz[i][j]);
                }
                printf("\n");

            }
            printf("\n");
        }
        printf("\n");
        printf("\nRetir? (s/n)?\n\n");
        ch = getch();
    }while((ch != 'n') && (ch != 'N'));
    return 0;
}



int determinante_matriz(){

    int i = 0, j = 0, k = 0, contador = 0, contador_2 = 0, det = 0;
    int valor = 0, soma_direita = 0, soma_esquerda = 0, ordem = 0;
    int matriz[100][100];
    char ch;


do{

        system("CLS");


        printf("\t\tDETERMINANTE E SINGULAR:\t\t\n", setlocale(LC_ALL,""));
    for ( i = 0; i < 100; i++ )
    {

        for ( j = 0; j < 100; j++ )
            matriz[i][j] = 0;

    }


    printf( "Entre com a ordem da matriz:  ");
    scanf("%d", &ordem);

    printf("\n");

    for ( i = 0; i < ordem; i++ ){
          for( j = 0; j < ordem; j++ ){
                   printf("Entre com o elemento [%d,%d] da matriz: ", i, j);
                   scanf("%d", &valor);
                   matriz[i][j]=valor;
            }
    }
printf("\n");

    j = 0;
    k = 0;
    valor = 1;
    contador = 0;
    contador_2 = 0;
    soma_direita = 0;

    for ( i = 0; i <= ( ordem * ordem ); i++ )
    {


        if ( j == ordem )
        {

            j = 0;
            contador_2++;
            k = contador_2;

        }

        if ( k == ordem )
            k = 0;

        valor = valor * matriz[j][k];

        j++;
        k++;
        contador++;

        if ( contador == ordem )
        {

            soma_direita = soma_direita + valor;
            valor = 1;
            contador = 0;

        }


    }


    j = 0;
    k = ordem - 1;
    valor = 1;
    contador = 0;
    contador_2 = ordem - 1;
    soma_esquerda = 0;

    for ( i = 0; i <= ( ordem * ordem ); i++ )
    {


        if ( j == ordem )
        {

            j = 0;
            contador_2--;
            k = contador_2;

        }

        if ( k < 0 )
            k = ordem -1 ;

        valor = valor * matriz[j][k];

        j++;
        k--;
        contador++;

        if ( contador == ordem )
        {

            soma_esquerda = soma_esquerda + valor;
            valor = 1;
            contador = 0;

        }


    }

    det = soma_direita + ( soma_esquerda * (-1) );
    if(det == 0){
        printf("Matriz singular\n\n");
    }else{
        printf("Matriz não singular\n\n", setlocale(LC_ALL,""));
    }
    if(det < 0){
        det *= (-1);
        printf("Determinante = %d\n", det);
    }else{
        printf("Determinante = %d\n", det);
    }

    printf("\n");
        printf("Repetir? (s/n)?\n\n");
        ch = getch();
    }while((ch != 'n') && (ch != 'N'));
    return 0;

}

int sistemaLinear(){
    int i, j, k;
    float fator, soma;
    float X[N];
    float M[N][N+1];
    char ch;

    do{

    system("CLS");

            printf("\t\tSISTEMA LINEAR COM GAUSS-JORDAN:\t\t\n\n", setlocale(LC_ALL,""));
    for(i = 0; i<N; i++){
        for(j = 0; j<=N; j++){
           printf("Entre com o elemento [%d,%d] da matriz: ", i, j);
           scanf("%f", &M[i][j]);
        }
    }
    printf("\n");

printf("#----------------------------- Elementos da Matriz ------------------------------#\n\n");
    for(i = 0; i<N; i++){
        for(j = 0; j<=N; j++){
            printf("|%.2f\t", M[i][j]);
        }
        printf("\n");
    }

    for(k = 0; k<N-1; k++){
        for(i = (k+1); i<N; i++){
            fator = M[i][k] / M[k][k];

   for(j=0; j<=N; j++){
                M[i][j] = M[i][j] - fator*M[k][j];
            }
        }
    }

    X[N-1] = M[N-1][N] / M[N-1][N-1]; 


    for(i=N-2; i>=0; i--){ 

        soma = 0;

        for(j=(i+1); j<N; j++){    
            soma = soma + M[i][j]*X[j]; 
        }
        X[i] = (M[i][N] - soma)/M[i][i]; 
    }
    printf("\n");

   printf("#---------------------------------- Resultado -----------------------------------#\n\n");
    for(i=0; i<N; i++){
         printf("\nX%d = %.2f\n", i+1, X[i]);
    }

        printf("\n");
        printf("\nRpetir? (s/n)?\n\n");
        ch = getch();
    }while((ch != 'n') && (ch != 'N'));
return 0;
}
