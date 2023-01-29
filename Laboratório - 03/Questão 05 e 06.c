# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

// QUESTÃO 05 <=====

typedef struct
{

  /* STRING */
  char name   [100];
  char email  [100];
  char adress [100];
  char cpf    [20];

  /* INT */
  int age;
  int bir_day; // dia
  int bir_mon; // mes
  int bir_yea; // ano

  /* FLOAT */
  float hei;
  float wei;
  float IMC;

  /* CHAR */
  char sex;

} CLIENT;

CLIENT cly;

// QUESTÃO 06 <=====

int main (void)
{
    system("cls");
    setlocale(LC_ALL,"");

    printf ("\n\t\t\t\t\t      Cadastramento de Cliente\n");
    for ( int kaj = 0; kaj < 120; kaj++) printf("_");

    // PREENCHIMENTO DA FICHA DO CLIENTE:

    printf("\n\n .1# Nome do Cliente: ");
    scanf("%[^\n]", cly.name);
    setbuf(stdin, NULL);


    printf("\n .2# Idade do Cliente: ");
    scanf("%d", &cly.age);
    setbuf(stdin, NULL);


    printf("\n .3# CPF do Cliente: ");
    scanf("%[^\n]", cly.cpf);
    setbuf(stdin, NULL);


    printf("\n .4# Data de Nascimento do Cliente (Ex.: 01 02 2022, escreva junto): ");
    scanf("%d %d %d", &cly.bir_day, &cly.bir_mon, &cly.bir_yea);
    setbuf(stdin, NULL);


    printf("\n .5# Sexo do Cliente ( F ou M ): ");
    scanf("%c", &cly.sex);
    setbuf(stdin, NULL);

    // Cálculo do IMC
    printf("\n .6# Altura do Cliente ( Número decimal ' , ' ): ");
            scanf("%f", &cly.hei);
            setbuf(stdin, NULL);
    printf("\n .7# Peso do Cliente ( Número decimal ' , ' ): ");
            scanf("%f", &cly.wei);
            setbuf(stdin, NULL);
    cly.IMC = cly.wei / (cly.hei * cly.hei);

    printf("\n .8# Endereço do Cliente: ");
    scanf("%[^\n]", cly.adress);
    setbuf(stdin, NULL);


    printf("\n .9# Email do Cliente: ");
    scanf("%[^\n]", cly.email);
    setbuf(stdin, NULL);

    // PRINT DA FICHA

    system("CLS");

    printf("--------------------------------\n");

    printf("\n  _____ FICHA DE CLIENTE _____\n\n");

    printf("--------------------------------\n");

    printf("\n # Informações Padrões: \n");

    printf ("\n - Nome: %s", cly.name);
    printf ("\n - Data de Nascimento: %d / %d / %d", cly.bir_day, cly.bir_mon, cly.bir_yea);
    printf ("\n - Idade: %d", cly.age);
    printf ("\n - CPF: %s", cly.cpf);
    printf ("\n - Sexo: %c", cly.sex);
    printf ("\n - Endereço: %s", cly.adress);
    printf ("\n - E-mail: %s", cly.email);

    printf("\n\n--------------------------------");

    printf("\n\n # Informações Específicas: \n");
    printf ("\n - Altura: %2.2f", cly.hei);
    printf ("\n - Peso: %2.2f", cly.wei);
    printf ("\n - IMC: %2.2f", cly.IMC);

    printf("\n\n--------------------------------\n");

    system("PAUSE > NULL");




}


