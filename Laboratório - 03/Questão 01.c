# include <stdio.h>
# include <stdlib.h>


// Cria��o de Novos tipos de dados:

typedef struct
{

  int hora;
  int minutos;
  int segundos;

} HORARIOS; // <-

typedef struct
{

  int dia;
  int mes;
  int ano;

} DATA;   // <-

typedef struct
{

  int data;
  int horario;
  int compromisso;

} AGENDA; // <-

  // Definindo:

int main (void)
{

// Hor�rio: composto de hora, minutos e segundos.

   HORARIOS horarios;

// Data: composto de dia, m�s e ano.

   DATA data;

// Agenda: composto de uma data, hor�rio e texto que descreve o compromisso.

   AGENDA agenda;

}
