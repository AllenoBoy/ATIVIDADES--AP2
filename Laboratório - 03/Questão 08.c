# include <stdio.h>
# include <stdlib.h>
# include <iso646.h>
# include <locale.h>
# include <string.h>

int kaj = 0;
int ccc = 1;

char aln_max_one [50];
char aln_max_med [50];
char aln_min_med [50];

float media_dos_alunos [5] = { 8.5, 3.4, 8.4 , 7.9 , 1.5 };
float menor, maior, prova1;

typedef struct
{

  char matricula [20];
  char nome      [50];

  float n1;
  float n2;
  float n3;

} COURSE; COURSE cs [5];

void main ()
{
     system ("cls");
     setlocale (LC_ALL, "");


     // Recebendo as informa��es:

do
{
   system ("cls");
   for ( int kaj = 0; kaj < 120; kaj++ ) printf ("=");
   printf ("\n\n\t\t\t\t > Fechamento de Bimestre do Curso de Ci�ncias da Computa��o <\n\n");
   for ( int kaj = 0; kaj < 120; kaj++ ) printf ("=");

   printf ("\n\n==> Insira o nome do aluno %d = ", ccc);
   scanf ("%[^\n]", cs[kaj].nome);
   setbuf(stdin, NULL);

   printf ("\n==> Insira a matr�cula do aluno %d = ", ccc);
   scanf ("%[^\n]", cs[kaj].matricula);
   setbuf(stdin, NULL);

   printf ("\n==> Insira as 3 notas do aluno %d (EX.: 1,5 3,9 8,4 em caso de nota 0: 0,00) = ", ccc);
   scanf ("%f %f %f", &cs[kaj].n1, &cs[kaj].n2, &cs[kaj].n3);
   setbuf(stdin, NULL);

   kaj++;
   ccc++;

} while ( kaj < 5 );

     // MAIOR NOTA NA PRIMEIRA PROVA:
     for ( int BOB = 0; BOB < 5; BOB++ )
                                  if ( cs[BOB].n1 > prova1 ) prova1 = cs[BOB].n1;

     // C�LCULO DE M�DIA DOS ALUNOS:
     for ( int kaj = 0; kaj < 5; kaj++ )
                                        media_dos_alunos [kaj] = ( cs[kaj].n1 + cs[kaj].n2 + cs[kaj].n3 ) / 3;

     menor = media_dos_alunos [0];

     // RECEBENDO A MAIOR M�DIA:
     for ( int max = 0; max < 5; max++ )
                                  if ( media_dos_alunos [max] > maior ) maior = media_dos_alunos [max];

     // RECEBENDO A MENOR M�DIA
     for ( int i = 0; i < 5; i++ )
     {
     if ( media_dos_alunos [i] == 0 ) break;
     if ( media_dos_alunos [i] < menor ) menor = media_dos_alunos [i];
     }

     // aln_max_one prova1

     for (int x = 0; x < 5; x++)
      if ( prova1 == cs[x].n1 )
       strcpy (aln_max_one, cs[x].nome);

     // aln_max_med maior

     for (int x = 0; x < 5; x++)
      if ( maior == media_dos_alunos [x] )
       strcpy (aln_max_med, cs[x].nome);

     // aln_min_med menor

     for (int x = 0; x < 5; x++)
      if ( menor == media_dos_alunos [x] )
       strcpy (aln_min_med, cs[x].nome);

     // Print das Notas espec�ficas requisitadas no exerc�cio:

     system("CLS");

     for ( int kaj = 0; kaj < 120; kaj++ ) printf ("_");

     printf ("\n\n\n # NOTAS ESPEC�FICAS \n");
     printf ("\n - Aluno com MAIOR nota na primeira prova e a nota = %s - %2.1f", aln_max_one, prova1);
     printf ("\n - Aluno com MAIOR m�dia geral e a nota = %s - %2.1f", aln_max_med, maior);
     printf ("\n - Aluno com MENOR m�dia geral e a nota = %s - %2.1f\n\n", aln_min_med, menor);

     for ( int kaj = 0; kaj < 120; kaj++ ) printf ("_");

     // Print da situa��o dos alunos:

     printf ("\n\n\n # SITUA��O DOS ALUNOS ( Nota = 6, APROVADO )\n");

     printf ("\n > Aluno %s est� ", cs[0].nome);
     if ( media_dos_alunos [0] >= 6.0 ) { printf (" Aprovado! "); }
     else                               { printf (" Reprovado! ");}

     printf ("\n > Aluno %s est� ", cs[1].nome);
     if ( media_dos_alunos [1] >= 6.0 ) { printf (" Aprovado! "); }
     else                               { printf (" Reprovado! ");}

     printf ("\n > Aluno %s est� ", cs[2].nome);
     if ( media_dos_alunos [2] >= 6.0 ) { printf (" Aprovado! "); }
     else                               { printf (" Reprovado! ");}


     printf ("\n > Aluno %s est� ", cs[3].nome);
     if ( media_dos_alunos [3] >= 6.0 ) { printf (" Aprovado! "); }
     else                               { printf (" Reprovado! ");}


     printf ("\n > Aluno %s est� ", cs[4].nome);
     if ( media_dos_alunos [4] >= 6.0 ) { printf (" Aprovado! "); }
     else                               { printf (" Reprovado! ");}


     printf("\n\n");
     for ( int kaj = 0; kaj < 120; kaj++ ) printf ("_");
     printf("\n\n");

     system("PAUSE > NULL");

}
