// DEFAULT HEADER FILES
   # include <stdio.h>
   # include <stdlib.h>
   # include <locale.h>

// EXTERN LIBRARY
   # include "EXTRN_PROBLMS.h"

// GLOBAL VARIABLES
   int MENU_SET;

   int x, y;

   int n;


// MAIN FUNCTION

/*

    - REQUISITED:

    QUESTÃO 1 - MENU
    QUESTÃO 2 - NÚMERO NEGATIVO OU POSITIVO
    QUESTÃO 3 - CALCULADORA
    QUESTÃO 4 - FATORIAL
    QUESTÃO 5 - PERCENTUAL
    QUESTÃO 6 - MÉDIA DOS ALUNOS

*/

int main (void)
{
    // CONSOLE SETUP:
    system ("CLS");
    system ("COLOR 02");
    setlocale (LC_ALL,"Portuguese_Brazil.1252");

    // MENU PRINT:
    system ("CLS");
    printf ("\n\t\t < MENU INTERATIVO >\n");
    printf("\n-------------------------------------------------\n");

    printf("\n 1 - Número positivo ou negativo.");
    printf("\n 2 - Cálculadora.");
    printf("\n 3 - Fatorial.");
    printf("\n 4 - Percentual.");
    printf("\n 5 - Média dos alunos.");
    printf("\n 6 - Sair do programa.\n");
    printf("\n-------------------------------------------------\n");

    printf("\n===> O que você deseja fazer: ");
    scanf ("%d", &MENU_SET);
    setbuf(stdin, NULL);

switch (MENU_SET)
{

/*---------------------------*/

    case 1:
            system ("CLS");

            printf("\n Retorno -> %d \n\n ", posORneg() );

            system ("PAUSE ");
            main ();
    break;

/*---------------------------*/

    case 2:
            system ("CLS");
            CALC_XY (x, y);

            main ();
    break;

/*---------------------------*/

    case 3:
            system ("CLS");
            FACTORIAL(n);

            main ();
    break;

/*---------------------------*/

    case 4:
            system ("CLS");

            printf("\n # O percentual de acréscimo foi de %.2f%% \n\n ", productCalculation () );

            system ("PAUSE ");
            main ();
    break;

/*---------------------------*/

    case 5:
            system ("CLS");
            printf("\n # A média desse aluno foi de %.2f \n\n ", averageGRADE () );
            system ("PAUSE ");
            main ();
    break;

/*---------------------------*/

    default:
        system ("CLS");
        printf ("\n Programa encerrou!\n\n ");
        system ("PAUSE ");
    break;

/*---------------------------*/


} // END OF SWITCH

    // CALLBACK FUNCTIONS:
}
