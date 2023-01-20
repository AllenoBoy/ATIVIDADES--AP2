///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// BIBLIOTECAS UTILIZADAS:

   # include <stdio.h>
   # include <stdlib.h>
   # include <conio.h>
   # include <windows.h>
   # include <string.h>
   # include <stdbool.h>
   # include <iso646.h>
   # include <ctype.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// VARIÁVEIS GLOBAIS:

                     /* Controle de Loop Global */
                     int kaj = 0;

                     /* Controle de Menu */
                     char c;
                     int control;
                     int pos = 1;
                     bool tutorialIsSee = true;
                     int questions = 1;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// VARIÁVEIS DE ACENTUAÇÃO:

            /* Caixa Baixa */
            int at = 198, aa = 160, ac = 131;  // ã , á , â
            int ea = 130, ec = 136;            // é , ê
            int ot = 228, oa = 162, oc = 147;  // õ , ó , ô
            int ia = 161, ic = 140;            // í , î
            int ua = 163, uc = 150;            // ú , û
            int cd = 135;                      // ç

            /* Caixa Alta */
            int AT = 199, AA = 181, AC = 182; // Ã , Á , Â
            int EA = 144, EC = 210;           // É , Ê
            int OT = 229, OA = 224, OC = 226; // Õ , Ó , Ô
            int IA = 214, IC = 215;           // Í , Î
            int UA = 233, UC = 234;           // Ú , Û
            int CD = 128;                     // Ç

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// VARIÁVEIS DE ESTILIZAÇÃO:

    /* Linhas Duplas */
    int drwCD = 205;
    int drwC9 = 201;
    int drwBB = 187;
    int drwBA = 186;
    int drwBC = 188;
    int drwC8 = 200;

    /* Linhas Unicas */
    int drwDA = 218;
    int drwC4 = 196;
    int drwBF = 191;
    int drwC0 = 192;
    int drwD9 = 217;
    int drwB3 = 179;

    /* Blocos */
    int drwB0 = 176;
    int drwDB = 219;

    /* Setas */
    int setaC = 24;
    int setaB = 25;
    int setaD = 26;
    int setaE = 27;

    /* Especiais */
    int drw9E = 158;
    int drwEE = 238;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// DECLARAÇÃO DE FUNÇÕES:

    /* Exercícios da Lista */
       void QUESTAO_1 ();
       void QUESTAO_2 ();
       void QUESTAO_3 ();
       void QUESTAO_4 ();
       void QUESTAO_5 ();
       void QUESTAO_6 ();
       void QUESTAO_7 ();
       void QUESTAO_8 ();

    /* Funções de Suporte */
       void gotoxy(int x, int y);
       void colorChange (int color);
       void tutorial ();
       void encerrando ();

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// FUNÇÃO MAIN:

int main (void)
{

  /* Inicializações do Console */
     system("CLS");
     system("TITLE Laboratório 02                                                                            16 / 01 / 2023");
     printf("\e[?25l");
     system("MODE CON:COLS=54 LINES=31");
     HWND hwnd = GetConsoleWindow();
     DWORD style = GetWindowLong(hwnd, GWL_STYLE);
     style &= ~WS_MAXIMIZEBOX & ~WS_MINIMIZEBOX & ~WS_SYSMENU & ~WS_SIZEBOX;
     SetWindowLong(hwnd, GWL_STYLE, style);
     questions = 1;

  /* Tutorial */
     if ( tutorialIsSee != true )
     {
     system("CLS");
     tutorial ();
     tutorialIsSee = true;
     }

  /* Printando o Menu */
     colorChange (2);
     printf("\n\n   %c", drwC9);
     for (kaj = 0; kaj < 15; kaj++) printf("%c", drwCD);

     colorChange (15);
     printf(" MENU PRINCIPAL ");

     colorChange (2);
     for (kaj = 0; kaj < 15; kaj++) printf("%c", drwCD);
     printf("%c", drwBB);


     do {
     printf("\n   %c", drwBA);
     for (kaj = 0; kaj < 46; kaj++) printf(" ");
     printf("%c", drwBA);

     printf("\n   %c", drwBA);
     for (kaj = 0; kaj < 16; kaj++) printf(" ");
     colorChange (15);
     printf(" QUEST%CO - 0%d ", AT, questions);

     colorChange (2);
     for (kaj = 0; kaj < 16; kaj++) printf(" ");
     printf("%c", drwBA);
     questions++;
     } while ( questions not_eq 9);

     printf("\n   %c", drwBA);
     for (kaj = 0; kaj < 46; kaj++) printf(" ");
     printf("%c", drwBA);

     printf("\n   %c", drwBA);
     for (kaj = 0; kaj < 17; kaj++) printf(" ");
     colorChange (15);
     printf(" FECHAR - X ", AT, questions);

     colorChange (2);
     for (kaj = 0; kaj < 17; kaj++) printf(" ");
     printf("%c", drwBA);

     printf("\n   %c", drwBA);
     for (kaj = 0; kaj < 46; kaj++) printf(" "); printf("%c", drwBA);

     printf("\n   %c", drwC8);
     for (kaj = 0; kaj < 46; kaj++) printf("%c", drwCD);
     printf("%c", drwBC);

     colorChange (1);

     printf("\n\n   %c", drwDA);
     for (kaj = 0; kaj < 18; kaj++) printf("%c", drwC4);
     colorChange (15);

     printf(" CONTE%cDO ", UA);
     colorChange (1);
     for (kaj = 0; kaj < 18; kaj++) printf("%c", drwC4);
     printf("%c\n   ", drwBF);


     printf("%c", drwB3);
     for (kaj = 0; kaj < 46; kaj++) printf(" ");
     printf("%c\n   ", drwB3);

     printf("%c", drwB3);
     for (kaj = 0; kaj < 46; kaj++) printf(" ");
     printf("%c\n   ", drwB3);

     printf("%c", drwB3);
     for (kaj = 0; kaj < 46; kaj++) printf(" ");
     printf("%c\n   ", drwB3);

     printf("%c", drwC0);
     for (kaj = 0; kaj < 46; kaj++) printf("%c", drwC4);
     printf("%c\n", drwD9);
     colorChange (15);


// CONTROLE DE SELEÇÃO DO MENU:
                               /* Basicamente esse loop controla a escolha usando a var pos */
do
{

if ( pos == 1 )
{
            colorChange (10);
            gotoxy (5, 26);

            printf("      1. Juntando uma string em outra.       ");

            colorChange (46);
            gotoxy (20, 4);

            printf(" QUEST%CO - 01 ", AT);

}           //
            else
            {
                colorChange (15);
                gotoxy (20, 4);
                printf(" QUEST%CO - 01 ", AT);
            }

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

if ( pos == 2 )
{
            colorChange (10);
            gotoxy (5, 26);

            printf("    2. Tamanho de String e sua Invers%co.    ", at);

            colorChange (46);
            gotoxy (20, 6);

            printf(" QUEST%CO - 02 ", AT);

}           //
            else
            {
                colorChange (15);
                gotoxy (20, 6);
                printf(" QUEST%CO - 02 ", AT);
            }

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

if ( pos == 3 )
{

            colorChange (10);
            gotoxy (5, 26);

            printf("      3. Concatena%c%co de Duas Strings.      ", cd, at);

            colorChange (46);
            gotoxy (20, 8);

            printf(" QUEST%CO - 03 ", AT);

}           //
            else
            {
                colorChange (15);
                gotoxy (20, 8);
                printf(" QUEST%CO - 03 ", AT);
            }

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

if ( pos == 4 )
{
            colorChange (10);
            gotoxy (5, 26);

            printf("  4. Usu%crio e Senha - Usando a <string.h>  ", aa);

            colorChange (46);
            gotoxy (20, 10);

            printf(" QUEST%CO - 04 ", AT);

}           //
            else
            {
                colorChange (15);
                gotoxy (20, 10);
                printf(" QUEST%CO - 04 ", AT);
            }

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

if ( pos == 5 )
{
            colorChange (10);
            gotoxy (5, 26);

            printf("   5. Identificar a vogal 'a' na string.  ", aa);

            colorChange (46);
            gotoxy (20, 12);

            printf(" QUEST%CO - 05 ", AT);

}           //
            else
            {
                colorChange (15);
                gotoxy (20, 12);
                printf(" QUEST%CO - 05 ", AT);
            }

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

if ( pos == 6 )
{
            colorChange (10);
            gotoxy (5, 26);

            printf("   6. A string digitada %c um pal%cndromo??    ", ea, ia);

            colorChange (46);
            gotoxy (20, 14);

            printf(" QUEST%CO - 06 ", AT);

}           //
            else
            {
                colorChange (15);
                gotoxy (20, 14);
                printf(" QUEST%CO - 06 ", AT);
            }

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

if ( pos == 7 )
{
            colorChange (10);
            gotoxy (5, 26);

            printf("   7. A frase digitada %c um pal%cndromo???  ", ea, ia);

            colorChange (46);
            gotoxy (20, 16);

            printf(" QUEST%CO - 07 ", AT);

}           //
            else
            {
                colorChange (15);
                gotoxy (20, 16);
                printf(" QUEST%CO - 07 ", AT);
            }

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

if ( pos == 8 )
{

            colorChange (10);
            gotoxy (5, 26);

            printf(" 8. Usu%crio e Senha - Sem usar a <string.h> ", aa);

            colorChange (46);
            gotoxy (20, 18);

            printf(" QUEST%CO - 08 ", AT);

}           //
            else
            {
                colorChange (15);
                gotoxy (20, 18);
                printf(" QUEST%CO - 08 ", AT);
            }

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

if ( pos == 9 )
{
            colorChange (10);
            gotoxy (5, 26);

            printf("         Encerrar agora o Programa!         ", at);

            colorChange (46);
            gotoxy (20, 20);

            printf("  FECHAR - X  ", AT);

}           //
            else
            {
                colorChange (15);
                gotoxy (20, 20);
                printf("  FECHAR - X  ", AT);
            }

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

// DEFINIÇÕES DO CONTROLE DE MENU:

   /* Recebe o que o usuário digita */
      c = getch();
      setbuf(stdin, NULL);

   /* Verificações do Stdin */
      if ( c == 72 or c == 119 ) { pos--; } /* Seta para cima ou W */
      if ( c == 80 or c == 115 ) { pos++; } /* Seta para baixo ou s */
      if ( pos == 0  ) { pos = 9; }
      if ( pos == 10 ) { pos = 1; }

/* O Loop encerra quando o user digitar enter */
} while ( c != 13 );

// EXECUÇÃO DA DECISÃO SELECIONADA:

   /* Define qual exercício será executado */
      if ( pos == 1 ) { control = 1; }
      if ( pos == 2 ) { control = 2; }
      if ( pos == 3 ) { control = 3; }
      if ( pos == 4 ) { control = 4; }
      if ( pos == 5 ) { control = 5; }
      if ( pos == 6 ) { control = 6; }
      if ( pos == 7 ) { control = 7; }
      if ( pos == 8 ) { control = 8; }
      if ( pos == 9 ) { control = 9; }


/* Switch que chama a função que armazena o exercício para ser executado */
switch ( control )
{
                  case 1:
                       /* Ao iniciar */
                          system("CLS");
                          QUESTAO_1 ();
                       /* Ao encerrar */
                          main ();
                  break;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

                  case 2:
                       /* Ao iniciar */
                          system("CLS");
                          QUESTAO_2 ();
                       /* Ao encerrar */
                          main ();
                  break;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

                  case 3:
                       /* Ao iniciar */
                          system("CLS");
                          QUESTAO_3 ();
                       /* Ao encerrar */
                          main ();
                  break;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

                  case 4:
                       /* Ao iniciar */
                          system("CLS");
                          QUESTAO_4 ();
                       /* Ao encerrar */
                          main ();
                  break;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

                  case 5:
                       /* Ao iniciar */
                          system("CLS");
                          QUESTAO_5 ();
                       /* Ao encerrar */
                          main ();
                  break;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

                  case 6:
                       /* Ao iniciar */
                          system("CLS");
                          QUESTAO_6 ();
                       /* Ao encerrar */
                          main ();
                  break;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

                  case 7:
                       /* Ao iniciar */
                          system("CLS");
                          QUESTAO_7 ();
                       /* Ao encerrar */
                          main ();
                  break;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

                  case 8:
                       /* Ao iniciar */
                          system("CLS");
                          QUESTAO_8 ();
                       /* Ao encerrar */
                          main ();
                  break;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

                  case 9:
                         encerrando ();
                  break;

} /* Fim da Switch das questões */

} /* Fim da Função Main */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// QUESTÃO 1

void QUESTAO_1 ()
{
     /* Variáveis Utilizadas */
     char ex1_str [20] = "Pessoa ";
     char ex1_sho [20] = " - Segunda string.";

     char ex1_c;

     int contador = 1, digitado = 0, ex1_kaj = 0;

     /* Desenhando as informações iniciais dessa função */
     colorChange(5);
     printf(" %c", drwDA);
     for (kaj = 0; kaj < 50; kaj++) printf("%c", drwC4);
     printf("%c ", drwBF);
     printf(" %c", drwB3);

     colorChange(15);
     printf ("   Insira alguma palavra para o sistema juntar   ");

     colorChange(5);
     printf(" %c", drwB3);
     printf("  %c", drwC0);
     for (kaj = 0; kaj < 50; kaj++) printf("%c", drwC4);
     printf("%c ", drwD9);


     colorChange (2);
     printf("\n\n\t\t       ENTRADA: \n");
     for (kaj = 0; kaj < 16; kaj++) printf (" ");
     printf("%c", drwC9);
     for (kaj = 0; kaj < 20; kaj++) printf("%c", drwCD);
     printf("%c \n", drwBB);
     for (kaj = 0; kaj < 16; kaj++) printf (" ");
     printf("%c", drwBA);
     for (kaj = 0; kaj < 19; kaj++) printf (" ");
     printf(" %c\n", drwBA);
     for (kaj = 0; kaj < 16; kaj++) printf (" ");
     printf("%c", drwC8);
     for (kaj = 0; kaj < 20; kaj++) printf("%c", drwCD);
     printf("%c ", drwBC);

     colorChange (15);
     printf("\n\n\n\n");

     /* Desenhando a informação das letras digitadas */
     colorChange(13);
     for (kaj = 0; kaj < 54; kaj++) printf("%c", drw9E);

     colorChange(15);
     printf("\n\n Quantas letras foram digitadas: \n");
     for (kaj = 0; kaj < 32; kaj++) printf(" ");
     for (kaj = 0; kaj < 6; kaj++) printf("%c", drwEE);

     colorChange(13);
     printf("\n");
     for (kaj = 0; kaj < 54; kaj++) printf("%c", drw9E);


     /* Aviso Impresso, Esqueci de Printar anteriormente */
     colorChange(15);
     gotoxy (1, 9);
     printf("*Aviso: Nem espa%co e nem acentua%c%co funciona!", cd, cd, at);

     /* Vai para a posição que receberá o Stdin */
     gotoxy (17, 6);
     int e1x = 17;

// PROCESSO DE RECEBIMENTO DE STDIN CONTROLADO
do
{
     /* Variável do tipo char que recebe o buffer do teclado */
     ex1_c = getch ();

/* Tratando o buffer do teclado ... */
if ( isalpha (ex1_c) not_eq 0 and digitado < 20 or isdigit (ex1_c) not_eq 0 and digitado < 20)
{
      printf("%c", ex1_c);
      ex1_str [ex1_kaj] = ex1_c;

      ex1_kaj++;
      e1x++;
      digitado++;

      colorChange(10);
      gotoxy (34, 13); printf("%.2d", digitado);

      colorChange(15);
      gotoxy (e1x, 6);
}

else if ( ex1_c == 8 and digitado != 0 )
{
      printf ("\b \b");
      ex1_str [ex1_kaj] = '\0';

      ex1_kaj--;
      digitado--;
      e1x--;

      colorChange(4);
      gotoxy (34, 13); printf("%.2d", digitado);

      colorChange(15);
      gotoxy (e1x, 6);
}

/* ... Enquanto o usuário não apertar enter */
} while ( ex1_c not_eq 13 );

     /* Concatenação de strings -> Requisitado na atividade */
     ex1_str [ex1_kaj] = 0;
     strcat (ex1_str, ex1_sho);

     /* Desenhando as informações necessárias ao usuário */

     gotoxy (34, 15);
     printf("\n\n A jun%c%co das strings resulta em:  \n\n\n", cd, at, ea);
     gotoxy (1, 19); printf("--> %s \n\n", ex1_str);

     colorChange(13);
     for (kaj = 0; kaj < 54; kaj++) printf("%c", drw9E);

     colorChange(15);

/* Fim da Função */
printf("\n\n\n\n\n\n\n\n > Pressione qualquer tecla para continuar!");
system("PAUSE > NULL");
system("CLS");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// QUESTÃO 2

void QUESTAO_2 ()
{
     /* Variáveis Utilizadas */
     char ex2_str [50];

     bool sair = false;

     char fell;

     int size = 0, controle_de_thing = 0;

/* Desenhando as informações iniciais */
do
{
     system("CLS");

     colorChange(3);
     printf("\n %c", drwC9);
     for ( kaj = 0; kaj < 50; kaj++ ) printf("%c", drwCD);
     printf("%c\n", drwBB);
     printf(" %c", drwBA);
     for ( kaj = 0; kaj < 49; kaj++ ) printf(" ");
     printf(" %c ", drwBA);
     printf(" %c", drwBA);

     colorChange(15);
     printf("  Irei Checar o tamanho do texto e sua invers%co! ", at);

     colorChange(3);
     printf(" %c ", drwBA);
     printf(" %c", drwBA);
     for ( kaj = 0; kaj < 49; kaj++ ) printf(" ");
     printf(" %c", drwBA);
     printf("\n %c", drwC8);
     for ( kaj = 0; kaj < 50; kaj++ ) printf("%c", drwCD);
     printf("%c\n", drwBC);

     colorChange(15);
     printf("\n { Escreva uma frase / string com at%c 50 caracteres }\n\n ", ea);
     printf("\e[?25h");

     /* Recebendo o Stdin do Usuário */
     colorChange(6);
     scanf("%[^\n]", ex2_str);
     setbuf(stdin, NULL);

     /* Recebendo o tamanho do que foi digitado*/
     size = strlen(ex2_str);

/* Loop executa enquanto o usuário digitar algo maior do que 50 ou nada */
} while ( size >= 50 or size <= 0 or ex2_str[0] == ' ' );

     /* Desenhando as opções */
     printf("\e[?25l\n");

     colorChange(15);
     for ( kaj = 0; kaj < 54; kaj++ ) printf("%c", drwCD);
     printf ("\n\n ===> O que voc%c deseja fazer? \n", ec);
     printf ("\n 1 - Exibir o tamanho do texto.");
     printf ("\n 2 - Invers%co da string digitada.\n\n");
     printf (" ==:> ");
     printf("\e[?25h");

/* Validando opção */
do
{
     fell = getch ();
     if ( fell == '1' ) { controle_de_thing = 1; }
     if ( fell == '2' ) { controle_de_thing = 2; }

} while ( controle_de_thing == 0 );


/* Switch que executa a opção válida selecionada */
switch (controle_de_thing)
{
     /* Usuário Decidiu ver o tamanho do que foi digitado */
     case 1:
            system ("CLS");
            printf("\e[?25l");

            colorChange(1);
            printf("\n %c", drwC9);
            for ( kaj = 0; kaj < 50; kaj++ ) printf("%c", drwCD);
            printf("%c\n", drwBB);
            printf(" %c", drwBA);
            for ( kaj = 0; kaj < 49; kaj++ ) printf(" ");
            printf(" %c ", drwBA);
            printf(" %c", drwBA);
            for ( kaj = 0; kaj < 49; kaj++ ) printf(" ");
            printf(" %c ", drwBA);
            printf(" %c ", drwBA);

            colorChange(15);
            printf("\t      O TAMANHO DA STRING %c DE:            ", EA);

            colorChange(1);
            printf(" %c \n", drwBA);
            printf(" %c", drwBA);
            for ( kaj = 0; kaj < 49; kaj++ ) printf(" ");
            printf(" %c ", drwBA);
            printf(" %c", drwBA);
            for ( kaj = 0; kaj < 49; kaj++ ) printf(" ");
            printf(" %c ", drwBA);
            printf(" %c", drwC8);
            for ( kaj = 0; kaj < 50; kaj++ ) printf("%c", drwCD);
            printf("%c ", drwBC);

            colorChange(15);
            gotoxy (40, 4);
            printf("%d", size);

/* Fim da Função */
printf("\n\n\n\n\n > Pressione qualquer tecla para continuar!");
system("PAUSE > NULL");
system("CLS");
sair = true;
     break;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

     /* Usuário decidiu ver o inverso do que foi digitado */
     case 2:
            system ("CLS");
            printf("\e[?25l");

            colorChange(6);
            for ( kaj = 0; kaj < 54; kaj++ ) printf("%c", drwCD);

            colorChange(15);
            printf("\n\n A string digitada %c igual a: \n\n==>", ea);

            colorChange(1);
            printf(" %s\n", ex2_str);

            colorChange(15);
            printf("\n A string invertida %c igual a: \n\n==> ", ea);

            colorChange(1);
            for (kaj = size; kaj > -1; kaj--) printf("%c", ex2_str[kaj]);
            printf("\n\n");

            colorChange(6);
            for ( kaj = 0; kaj < 54; kaj++ ) printf("%c", drwCD);
            colorChange(15);

/* Fim da função */
printf("\n\n > Pressione qualquer tecla para continuar!");
system("PAUSE > NULL");
system("CLS");
sair = true;

     break;

} /* Fim do switch das 2 opções */
  colorChange(15);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// QUESTÃO 3

void QUESTAO_3 ()
{
     /* Variáveis Utilizadas (sem alocação) */
     char ex3_string1 [512];
     char ex3_string2 [512];
     char ex3_resulta [1024];

     /* Desenhando informações iniciais */
     colorChange(4);
     for ( kaj = 0; kaj < 54; kaj++) printf("%c", drwC4);
     printf("%c", drwBF); for ( kaj = 0; kaj < 52; kaj++) printf(" ");
     printf("%c", drwDA);
     printf("%c", drwB3);

     colorChange(15);
     printf("     Concatena%c%co de 2 strings em uma terceira!     ", cd, at);

     colorChange(4);
     printf("%c", drwB3);
     printf("%c", drwB3);
     for ( kaj = 0; kaj < 52; kaj++) printf(" "); printf("%c", drwB3);
     printf("%c", drwC0);
     for ( kaj = 0; kaj < 52; kaj++) printf("%c", drwC4); printf("%c\n", drwD9);

     /* Recebendo o Stdin do user */
     colorChange(15);
     printf("\n Insira a primeira string: \n\n ==> ");

     colorChange(9);
     printf("\e[?25h");
     scanf("%[^\n]", ex3_string1);
     setbuf(stdin, NULL);
     printf("\e[?25l");

     colorChange(15);
     printf("\n Insira a segunda string: \n\n ==> ");

     colorChange(12);
     printf("\e[?25h");
     scanf("%[^\n]", ex3_string2);
     setbuf(stdin, NULL);
     printf("\e[?25l");
     printf("\n");


     colorChange(4);
     for (kaj = 0; kaj < 54; kaj++) printf("%c", drwCD);

     /* Concatenando as strings em uma terceira -> Requisitado no exercício */
     colorChange(15);
     printf("\n\n *A concatena%c%co das 2 strings resultou em: \n\n==> ", cd, at);
     strcat (ex3_string1, ex3_string2);
     strcpy (ex3_resulta, ex3_string1);

     colorChange(6);
     printf("%s", ex3_resulta);

/* Fim da função */
colorChange(15);
printf("\n\n\n > Pressione qualquer tecla para continuar!");
system("PAUSE > NULL");
system("CLS");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// QUESTÃO 4

void QUESTAO_4 ()
{
/* Fim da função */
printf("\n\n\n > Pressione qualquer tecla para continuar!");
system("PAUSE > NULL");
system("CLS");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// QUESTÃO 5

void QUESTAO_5 ()
{
/* Fim da função */
printf("\n\n\n > Pressione qualquer tecla para continuar!");
system("PAUSE > NULL");
system("CLS");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// QUESTÃO 6

void QUESTAO_6 ()
{
/* Fim da função */
printf("\n\n\n > Pressione qualquer tecla para continuar!");
system("PAUSE > NULL");
system("CLS");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// QUESTÃO 7

void QUESTAO_7 ()
{
/* Fim da função */
printf("\n\n\n > Pressione qualquer tecla para continuar!");
system("PAUSE > NULL");
system("CLS");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// QUESTÃO 8

void QUESTAO_8 ()
{
/* Fim da função */
printf("\n\n\n > Pressione qualquer tecla para continuar!");
system("PAUSE > NULL");
system("CLS");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// TUTORIAL DE USO

void tutorial ()
{
     /* Variáveis Utilizadas */
     int tutorial = 0;

     colorChange (2);
     printf ("%c", drwC9);
     for (kaj = 0; kaj < 52; kaj++) printf("%c", drwCD);
     printf ("%c", drwBB);

// DESENHANDO AS INFORMAÇÕES DO TUTORIAL:

do
{
    colorChange (2);
    printf ("%c", drwBA);

    colorChange (1);
    for (kaj = 0; kaj < 52; kaj++) printf("%c", drwB0);

    colorChange (2);
    printf ("%c", drwBA);
    tutorial++;

} while ( tutorial < 4);

    colorChange (2);
    printf ("%c", drwBA);

    colorChange (1);
    for (kaj = 0; kaj < 16; kaj++) printf("%c", drwB0);

    colorChange (15);
    printf ("| TUTORIAL DE USO |");

    colorChange (1);
    for (kaj = 0; kaj < 17; kaj++) printf("%c", drwB0);

    colorChange (2);
    printf ("%c", drwBA);
    tutorial = 0;

do
{
    colorChange (2);
    printf ("%c", drwBA);

    colorChange (1);
    for (kaj = 0; kaj < 52; kaj++) printf("%c", drwB0);

    colorChange (2);
    printf ("%c", drwBA);
    tutorial++;

} while ( tutorial < 4);

    printf ("%c", drwC8);
    for (kaj = 0; kaj < 52; kaj++) printf("%c", drwCD);
    printf ("%c", drwBC);

    colorChange (15);
    printf ("\n\n- Use as setas do teclado para se movimentar no menu -\n", setaB);
    printf("\n\n\t\t   %c ou W - SUBIR", setaC);
    printf("\n\n\t\t   %c ou S - DESCER", setaB);
    printf("\n\n\t\t  ENTER - CONFIRMAR", setaB);
    printf ("\n\n\n Observa%c%co: Programa com menu interativo no console.\n", cd, at);
    printf (" Usando a fun%c%co gotoxy e a biblioteca windows.h que  ", cd, at);
    printf (" permite o controle e altera%c%co do console, ou seja,  ", cd, at);
    printf (" tamanho, posi%c%co, cor e poss%cveis restri%c%ces para o  ", cd, at, ia, cd, ot);
    printf (" usu%crio impedindo que o mesmo ferre o programa!", aa);

/* Fim da função */
printf("\n\n\n > Pressione qualquer tecla para continuar!");
system("PAUSE > NULL");
system("CLS");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// TELA DE ENCERRAMENTO DO PROGRAMA

void encerrando ()
{

     /* Correção de cor do plano de fundo */
     system("CLS");
     colorChange(0);
     for ( kaj = 0; kaj < 54 * 31; kaj++ ) printf("%c", drwDB);

     /* Desenhando o fim do programa */
     colorChange(5);
     gotoxy (0, 0);
     printf("\n %c", drwC9);
     for (kaj = 0; kaj < 50; kaj++) printf("%c", drwCD);
     printf("%c\n", drwBB);
     printf(" %c", drwBA);
     for (kaj = 0; kaj < 50; kaj++) printf(" ");
     printf("%c\n", drwBA);
     printf(" %c", drwBA);
     for (kaj = 0; kaj < 50; kaj++) printf(" ");
     printf("%c\n", drwBA);
     printf(" %c", drwBA);

     colorChange(2);
     for (kaj = 0; kaj < 12; kaj++) printf(" ");
     printf(" !OBRIGADO POR ME TESTAR! ");
     for (kaj = 0; kaj < 12; kaj++) printf(" ");

     colorChange(5);
     printf("%c\n", drwBA);
     printf(" %c", drwBA);
     for (kaj = 0; kaj < 50; kaj++) printf(" ");
     printf("%c\n", drwBA);
     printf(" %c", drwBA);
     for (kaj = 0; kaj < 50; kaj++) printf(" ");
     printf("%c\n", drwBA);
     printf(" %c", drwC8);
     for (kaj = 0; kaj < 50; kaj++) printf("%c", drwCD);
     printf("%c\n ", drwBC);


/* Fim da função */
colorChange(15);
gotoxy (1, 25);
for ( kaj = 0; kaj < 52; kaj++ ) printf("%c", drwCD);
printf("\n > Pressione qualquer tecla para continuar!");
system("PAUSE > NULL");
printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// DEFINE A POSIÇÃO DO CURSOR NO CONSOLE PERMITINDO A CRIAÇÃO DE INTERATIVIDADE EM C

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ESTILIZAÇÃO DO CONSOLE USANDO CORES

void colorChange (int color)
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// END OF FILE
