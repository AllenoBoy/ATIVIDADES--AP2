# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int kaj = 0;
int alk = 1;

// Estrutura:

typedef struct
{

    char nome [50];
    char curso [50];
    int matricula;

} ALUNO;

        ALUNO aln [5];

int main (void)
{

    setlocale(LC_ALL, "");

do {

    system ("cls");

    printf ("\n Escreva o nome do aluno: ");
    scanf("%[^\n]", aln[kaj].nome);
    setbuf(stdin, NULL);

    printf ("\n Escreva o curso do aluno: ");
    scanf("%[^\n]", aln[kaj].curso);
    setbuf(stdin, NULL);

    printf ("\n Escreva a matrícula do aluno: ");
    scanf("%d", &aln[kaj].matricula);
    setbuf(stdin, NULL);

             kaj++;
   } while ( kaj < 5 );

    system ("cls");

    printf ("\n Informações preenchidas: \n\n");

    for (int kaj = 0; kaj < 5; kaj++ && alk++)
    {
    printf(" - Aluno %d: %s\n", alk, aln[kaj].nome);
    printf(" - Matrículado regurlamente no Curso: %s\n", aln[kaj].curso);
    printf(" - Identificação do aluno: %d\n\n", aln[kaj].matricula);
    }

}
