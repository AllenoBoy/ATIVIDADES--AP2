# include <stdio.h>
# include <stdlib.h>
# include "biblioteca.h"

// THE NUMBER IS POSITIVE OR NEGATIVE?
int posORneg ()
{
    int n;

    printf ("\n Insira o número: ");
    scanf ("%d", &n);
    setbuf (stdin, NULL);

    printf ("\n Observação: \n\t     # 1 = positivo \n\t     # 0 = Negativo\n");

    if ( n >= 0 ) { return 1; }
    else return 0;

}

// CALCULATOR
void CALC_XY (int x, int y)
{
    int set;

    int somar (int a, int b)       { return a + b; }
    int subtrair (int a, int b)    { return a - b; }
    int multiplicar (int a, int b) { return a * b; }
    float dividir (int a, int b)   { return a / b; }

    printf ("\n Insira o primeiro número: ");
    scanf ("%d", &x);
    setbuf (stdin, NULL);

    printf ("\n Insira o segundo  número: ");
    scanf ("%d", &y);
    setbuf (stdin, NULL);

    printf ("\n O que você deseja fazer: \n");
    printf ("\n 1 - Somar.");
    printf ("\n 2 - Subtrair.");
    printf ("\n 3 - Multiplicar.");
    printf ("\n 4 - Dividir.\n");

    printf("\n====> ");
    scanf ("%d", &set);

    switch (set)
    {

    case 1:
    printf ("\n Resultado da soma = %d", somar (x, y));
    break;

    case 2:
    printf ("\n Resultado da subtração = %d", subtrair (x, y));
    break;

    case 3:
    printf ("\n Resultado da multiplicação = %d", multiplicar (x, y));
    break;

    case 4:
    printf ("\n Resultado da divisão = %2.2f", dividir (x, y));
    break;

    default:
    CALC_XY(x, y);

    }

    printf("\n\n ");
    system ("PAUSE");
}

// FACTORIAL

void FACTORIAL (int n)
{

    printf ("\n Insira um número para printar o seu fatorial: ");
    scanf(" %d", &n);
    setbuf(stdin, NULL);

    printf ("\n Sequência de fatorial printada: \n ");

    for (int f = 1; n > 1; n = n - 1)
         printf("%d ", f = f * n);


    printf("\n\n ");
    system ("PAUSE");
}

// PRODUTO

float productCalculation ()
{
    float new_PRICE;
    float old_PRICE;
    float percentage;

    printf ("\n\t\t\t\t Observação: Use vírgula. Exemplo -> 12,53 \n");

    printf ("\n==> Insira o preço atual (CARO) do produto: ");
    scanf(" %f", &new_PRICE);
    setbuf(stdin, NULL);

    printf ("\n==> Insira o preço antigo (BARATO) do produto: ");
    scanf(" %f", &old_PRICE);
    setbuf(stdin, NULL);

    percentage = (100 * new_PRICE - 100 * old_PRICE) / new_PRICE;

    return percentage;
}

// MÉDIA DO ALUNO:
float averageGRADE ()
{
    float n1, n2, n3;
    int type;

    printf ("\n # Insira a primeira nota do aluno: ");
    scanf("%f", &n1);
    setbuf(stdin, NULL);

    printf ("\n # Insira a segunda  nota do aluno: ");
    scanf("%f", &n2);
    setbuf(stdin, NULL);

    printf ("\n # Insira a terceira nota do aluno: ");
    scanf("%f", &n3);
    setbuf(stdin, NULL);

    printf ("\n--------------------------------------------\n");

    printf ("\n 1 - Média Aritmética.");
    printf ("\n 2 - Média Ponderada.\n");

    printf ("\n--------------------------------------------\n");

    printf ("\n Qual o tipo de média: ");
    scanf("%d", &type);
    setbuf(stdin, NULL);

    if ( type == 1 ) { return (n1 + n2 + n3) / 3; }
    if ( type == 2 ) { return ( n1 * 5 + n2 * 3 + n3 * 2 ) / 3; }

    else averageGRADE();

    return 0;
}



