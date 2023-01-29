# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <locale.h>

typedef struct
{

  char rua [100];
  char num [100];
  char cep [100];

} ADRESS;

typedef struct
{

  char nome [100];
  ADRESS end;
  char sald [100];

} INFO;

  INFO inf;

// ---------------------------------- //

int main (void)
{
    system("cls");
    setlocale(LC_ALL,"");

    /* PREENCHIMENTO DAS 2 STRUCTS */

    // INFO USUÁRIO
        strcpy ( inf.end.rua , "Rua Riachuelo, Setor - Samuel Grahan (Jataí - GO)");
        strcpy ( inf.end.num , "n° 1530");
        strcpy ( inf.end.cep , "75804-020");

    // SALDO E NOME
        strcpy ( inf.nome , "Ivete de Abraão Sales Chaminé");
        strcpy ( inf.sald , "R$ 29.175.140,22");

    /* DISPLAY DAS INFORMAÇÕES PREENCHIDAS */

    printf ("-----------------------------------------");
    printf ("\n\n - INFORMAÇÕES DO BANCO ARROZ AMARELO -\n\n");
    printf ("-----------------------------------------\n");

    printf ("\n 1. Nome do Cliente = %s\n", inf.nome);
    printf ("\n 2. Dados do Cliente { ");
    printf ("\n\t\t       2.1 RUA = %s", inf.end.rua);
    printf ("\n\t\t       2.2 NÚM = %s ", inf.end.num);
    printf ("\n\t\t       2.3 CEP = %s", inf.end.cep);
    printf ("\n\t\t     }\n");
    printf ("\n 3. Saldo do Cliente: %s\n\n", inf.sald);

    system("PAUSE > NULL");

}
