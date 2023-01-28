# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int contador = 1;
int kaj = 0;

int v1;
int v2;

int maior;
int menor;

typedef struct
{

  int dia;
  int mes;
  int ano;

} DMA;

 DMA dma [2];

int main (void)
{
    system("cls");
    setlocale(LC_ALL,"");

    printf("\n @ COMPARADOR ENTRE DUAS DATAS @ \n");
    printf("\n -------------------------------\n");

do
{
    printf("\n # DATA %d\n", contador);

    printf ("\n Insira o dia: ");
    scanf("%d", &dma[kaj].dia);
    setbuf(stdin, NULL);

    printf ("\n Insira o mês: ");
    scanf("%d", &dma[kaj].mes);
    setbuf(stdin, NULL);

    printf ("\n Insira o ano: ");
    scanf("%d", &dma[kaj].ano);
    setbuf(stdin, NULL);

    kaj++;
    contador++;

} while (kaj < 2);

    printf("\n -------------------------------\n");

    v1 = dma[0].dia + ( dma[0].mes * 30 ) + ( dma[0].ano * 365 );
    v2 = dma[1].dia + ( dma[1].mes * 30 ) + ( dma[1].ano * 365 );

    if ( v1 > v2 ) { maior = v1; menor = v2; }
    else if ( v1 == v2 ) { maior = v1; menor = v2; }
    else { maior = v2; menor = v1; }

    printf ("\n Dias decorridos entre as duas datas: %d dias", maior - menor );
    printf("\n\n Observação: Sem tratamento de datas.\n");







}
