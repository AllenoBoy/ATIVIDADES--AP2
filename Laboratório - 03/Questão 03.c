# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <time.h>

// Considere a estrutura a seguir:

typedef struct
{

  float x;
  float y;
  float z;

} VETOR;

VETOR vt [3];

int main (void)
{
    system("cls");
    setlocale(LC_ALL,"");

    // Preenchendo as 2 structs iniciais:

    srand(time(NULL));

    for (int kaj = 0; kaj < 2; kaj++)
    {
        vt[kaj].x = rand () % 100 + 0.5;
        vt[kaj].y = rand () % 100 + 0.7;
        vt[kaj].z = rand () % 100 + 0.9;z
    }

    // Preenchendo a terceira struct:

    /* X -> */ vt[3].x = vt[0].x + vt[1].x;
    /* Y -> */ vt[3].y = vt[0].y + vt[1].y;
    /* Z -> */ vt[3].z = vt[0].z + vt[1].z;





    printf ("\n # Valores Gerados na Primeira Struct:\n");

    printf ("\n x = %2.2f", vt[0].x);
    printf ("\n y = %2.2f", vt[0].y);
    printf ("\n z = %2.2f", vt[0].z);

    printf ("\n\n # Valores Gerados na Segunda Struct:\n");

    printf ("\n x = %2.2f", vt[1].x);
    printf ("\n y = %2.2f", vt[1].y);
    printf ("\n z = %2.2f", vt[1].z);

    printf ("\n\n # Valores Gerados na Terceira Struct (soma dos valores das duas structs | x + x | z + z | y + y | ):\n");

    printf ("\n x = %2.2f", vt[3].x);
    printf ("\n y = %2.2f", vt[3].y);
    printf ("\n z = %2.2f", vt[3].z);

    printf("\n\n x + y + z = %2.2f", vt[3].x + vt[3].y + vt[3].z);

    printf("\n\n Pressione qualquer tecla para encerrar! ");
    getch();



}
