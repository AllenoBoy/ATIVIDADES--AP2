// DEFAULT HEADER FILES:
   # include <stdio.h>
   # include <stdlib.h>
   # include <locale.h>
   # include <time.h>

// GLOBAL FUNCTIONS:
void LeAluno ();
void ImprimeTurma ();
float CalculaMediaAluno ();

void fillup ();

/* --------------------------------------------------------------------------------------------------- */

// DATA TYPE
typedef struct
{

  int matricula;
  float notas[3];
  float set;

} ALUNO;        ALUNO Turma[5];

// GLOBAL VARIABLES:
   int pos = 1, i = 0;

/* --------------------------------------------------------------------------------------------------- */

// MAIN FUNCTION
int main(void)
{
    setlocale (LC_ALL, "");

    // SE QUISER PREENCHER MANUALMENTE USE LeAluno ();
          for ( i = 0; i < 5; i++ ) LeAluno();

    // SE QUISER PREENCHER AUTOMATICAMENTE USE fillup ();
         // fillup ();

    CalculaMediaAluno ();

    pos = 1;

    ImprimeTurma ();

}

/* --------------------------------------------------------------------------------------------------- */

void LeAluno ()
{
    system ("CLS");
    printf ("\n # Insira a matrícula do aluno %d = ", pos);  scanf ("%d", &Turma[i].matricula);    setbuf (stdin, NULL);
    printf ("\n - Insira a 1ª nota do aluno %d = ", pos);    scanf ("%f", &Turma[i].notas[0]);     setbuf (stdin, NULL);
    printf ("\n - Insira a 2ª nota do aluno %d = ", pos);    scanf ("%f", &Turma[i].notas[1]);     setbuf (stdin, NULL);
    printf ("\n - Insira a 3ª nota do aluno %d = ", pos);    scanf ("%f", &Turma[i].notas[2]);     setbuf (stdin, NULL);
    pos++;
}

//////////////////////////

float CalculaMediaAluno ()
{
    for ( int x = 0; x < 5; x++ )
    {
     Turma[x].set = ( Turma[x].notas[0] + Turma[x].notas[1] + Turma[x].notas[2] ) / 3;
    }
}

////////////////////

void ImprimeTurma ()
{
    system ("CLS");

    printf ("\n Impressão geral da turma:\n");

    for ( int kaj = 0; kaj < 5; kaj++)
    {
    printf ("\n => Aluno %d \n\t\t _Matrícula: %d \n\t\t _Média: %2.2f\n", pos, Turma[kaj].matricula, Turma[kaj].set);
    pos++;
    }

}

//////////////

void fillup ()
{
    srand(time(NULL));

    for ( int kaj = 0; kaj < 5; kaj++ )
    {
    Turma[kaj].matricula = rand () % 100;
    }

    // preenchimento predefinido - sem randomização
    Turma[0].notas[0] = 1.2; Turma[0].notas[1] = 5.3; Turma[0].notas[2] = 9.2;
    Turma[1].notas[0] = 3.3; Turma[1].notas[1] = 9.5; Turma[1].notas[2] = 8.2;
    Turma[2].notas[0] = 7.6; Turma[2].notas[1] = 2.9; Turma[2].notas[2] = 2.6;
    Turma[3].notas[0] = 4.2; Turma[3].notas[1] = 6.7; Turma[3].notas[2] = 9.0;
    Turma[4].notas[0] = 8.9; Turma[4].notas[1] = 3.5; Turma[4].notas[2] = 7.4;
}
