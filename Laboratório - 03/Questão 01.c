# include <stdio.h>
# include <stdlib.h>


// Criação de Novos tipos de dados:

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

// Horário: composto de hora, minutos e segundos.

   HORARIOS horarios;

// Data: composto de dia, mês e ano.

   DATA data;

// Agenda: composto de uma data, horário e texto que descreve o compromisso.

   AGENDA agenda;

}
