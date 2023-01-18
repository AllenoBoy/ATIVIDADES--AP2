/// BIBLIOTECAS UTILIZADAS ---------------------------------------------------------------------------------------------------------------------

# include <stdio.h>          // PADRÃO
# include <stdlib.h>         // PADRÃO
# include <conio.h>          // CONTROLE DE ENTRADA DO TECLADO
# include <windows.h>        // CONTROLE DOS ATRIBUTOS DO CONSOLE
# include <string.h>         // MANIPULAÇÃO DE VETOR DE CARACTERES
# include <stdbool.h>        // VARIÁVEIS BOLEANAS
# include <iso646.h>         // MACROS
# include <ctype.h>          // VALIDAÇÕES DE ENTRADA DO TECLADO

/// VARIÁVEIS GLOBAIS ---------------------------------------------------------------------------------------------------------------------

// Controle de loop:
                     int kaj = 0;   // i
// Controle do Menu:

                     char c;                     // recebe getch
                     int control;                // recebe enter
                     int pos = 1;                // controla a posição
                     bool tutorialIsSee = true;  // Exibe o tutorials



// Acentuação DEFAULT:

  /* CAIXA_BAIXA */
            int at = 198, aa = 160, ac = 131;  // ã , á , â
            int ea = 130, ec = 136;            // é , ê
            int ot = 228, oa = 162, oc = 147;  // õ , ó , ô
            int ia = 161, ic = 140;            // í , î
            int ua = 163, uc = 150;            // ú , û
            int cd = 135;                      // ç

  /* CAIXA_ALTA */
            int AT = 199, AA = 181, AC = 182; // Ã , Á , Â
            int EA = 144, EC = 210;           // É , Ê
            int OT = 229, OA = 224, OC = 226; // Õ , Ó , Ô
            int IA = 214, IC = 215;           // Í , Î
            int UA = 233, UC = 234;           // Ú , Û
            int CD = 128;                     // Ç

// Variaveis de estilização:

    // TIPO 1               // MODELO drwhexa from ASCII ->     "drawn" + "Hexadecimal Code" = drwVALUEINHEXA;
    int drwCD = 205;
    int drwC9 = 201;
    int drwBB = 187;
    int drwBA = 186;
    int drwBC = 188;
    int drwC8 = 200;

    // TIPO 2
    int drwDA = 218;
    int drwC4 = 196;
    int drwBF = 191;
    int drwC0 = 192;
    int drwD9 = 217;
    int drwB3 = 179;

    // TIPO 3
    int drwB0 = 176;
    int drwDB = 219;

    // TIPO 4
    int setaD = 26;
    int setaE = 27;

    int setaC = 24;
    int setaB = 25;

    // TIPO 5
    int drw9E = 158;
    int drwEE = 238;




/// DECLARAÇÃO DE FUNÇÕES ---------------------------------------------------------------------------------------------------------------------

void QUESTAO_1 (); /* LER DUAS STRINGS E JUNTAR-LAS */
void QUESTAO_2 (); /* EXIBIR O TAMANHO DE UMA STRING DIGITADA E A ESCREVER DE TRÁS PARA FRENTE */
void QUESTAO_3 (); /* CONCATENAÇÃO DE 2 STRINGS EM UMA TERCEIRA */
void QUESTAO_4 (); /* ADMIN E SENHA -> usando <string.h> */

void QUESTAO_5 (); /* CONTAR VOGAIS A */
void QUESTAO_6 (); /* PALÍNDROMO */
void QUESTAO_7 (); /* VERIFICAR SE UMA FRASE É PALÍNDROMA */
void QUESTAO_8 (); /* ADMIN E SENHA -> sem usar <string.h> */

/* FUNÇÃO GOTOXY PARA ESTILIZAÇÃO E DINAMIZAÇÃO DO CONSOLE EM C */
void gotoxy(int x, int y);
void tutorial ();

void colorChange (int color);   // permite atribuir cores em outras funções

/* GABARITO FUNÇÃO colorChange (int color);

    01 - BLACK
    02 - BLUE
    03 - GREEN
    04 - CYAN
    05 - RED
    06 - MAGENTA
    07 - BROWN
    08 - LIGHT GRAY
    09 - DARK GRAY
    10 - LIGHT BLUE
    11 - LIGHT GREEN
    12 - LIGHT CYAN --> SUS
    13 - LIGHT RED
    14 - YELLOW --> This is not yellow, not here and not in CHINA
    15 - WHITE
*/







///                                             CÓDIGO <- MAIN




int main (void)
{

  // Inicializações do console:

  /* Limpa a Tela */               system("CLS");
  /* Define o título do console */ system("TITLE Laboratório 02                                                                            16 / 01 / 2023");
  /* Esconde o cursor */           printf("\e[?25l");
  /* Tamanho da tela */            system("MODE CON:COLS=54 LINES=31");

/* ------------------------------------------------------------------------------------------------- */

// ÁREA DE COMANDOS QUE DEVE SER IGNORADA. POR QUE? São comandos da api / biblioteca windows.h
// QUE PERMITEM A MODIFICAÇÃO, ALTERAÇÃO, OTIMIZAÇÃO, ETC DE QUALQUER PROGRAMA QUE IRÁ RODAR
// NO CASO DESSE CÓDIGO O PROGRAMA A QUAL ESSAS LINHAS SE REFEREM É EXCLUSIVAMENTE AO CONSOLE!

              /* IGNORAR */        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
              /* IGNORAR */        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
              /* IGNORAR */        WORD saved_attributes;
              /* IGNORAR */        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
              /* IGNORAR */        saved_attributes = consoleInfo.wAttributes;

              /* IGNORAR 2 */      HWND hwnd = GetConsoleWindow();
              /* IGNORAR 2 */      DWORD style = GetWindowLong(hwnd, GWL_STYLE);
              /* IGNORAR 2 */      style &= ~WS_MAXIMIZEBOX & ~WS_MINIMIZEBOX & ~WS_SYSMENU & ~WS_SIZEBOX;
              /* IGNORAR 2 */      SetWindowLong(hwnd, GWL_STYLE, style);

if ( tutorialIsSee != true )
{
     system("CLS");
     tutorial ();

     tutorialIsSee = true;

}

/* ------------------------------------------------------------------------------------------------- */

/// MENU PRINCIPAL IGNORAR TBM, SÓ ESTILIZAÇÃO -----------------------------------------------------------------------------------------------------------------------------------

    SetConsoleTextAttribute(hConsole, saved_attributes);

    SetConsoleTextAttribute(hConsole, 2);               // VERDE
    printf("\n\n   %c", drwC9);
                             for (kaj = 0; kaj < 15; kaj++) printf("%c", drwCD);

    SetConsoleTextAttribute(hConsole, 15);              // BRANCO
    printf(" MENU PRINCIPAL ");

    SetConsoleTextAttribute(hConsole, 2);               // VERDE
                             for (kaj = 0; kaj < 15; kaj++) printf("%c", drwCD);
    printf("%c", drwBB);

    // QUESTÕES
       int questions = 1;

do
{
    printf("\n   %c", drwBA);
                             for (kaj = 0; kaj < 46; kaj++) printf(" ");
    printf("%c", drwBA);

    printf("\n   %c", drwBA);   // 14 to question
                             for (kaj = 0; kaj < 16; kaj++) printf(" ");
    SetConsoleTextAttribute(hConsole, 15);              // BRANCO
    printf(" QUEST%CO - 0%d ", AT, questions);

    SetConsoleTextAttribute(hConsole, 2);              // VERDE
                             for (kaj = 0; kaj < 16; kaj++) printf(" ");
    printf("%c", drwBA);
    questions++;

} while ( questions != 9);

    printf("\n   %c", drwBA);
                             for (kaj = 0; kaj < 46; kaj++) printf(" ");
    printf("%c", drwBA);

    printf("\n   %c", drwBA);   // 14 to question
                             for (kaj = 0; kaj < 17; kaj++) printf(" ");
    SetConsoleTextAttribute(hConsole, 15);              // BRANCO
    printf(" FECHAR - X ", AT, questions);

    SetConsoleTextAttribute(hConsole, 2);              // VERDE
                             for (kaj = 0; kaj < 17; kaj++) printf(" ");
    printf("%c", drwBA);


    printf("\n   %c", drwBA); for (kaj = 0; kaj < 46; kaj++) printf(" "); printf("%c", drwBA);

    printf("\n   %c", drwC8);
                              for (kaj = 0; kaj < 46; kaj++) printf("%c", drwCD);
    printf("%c", drwBC);

// Info

    SetConsoleTextAttribute(hConsole, 1);

    printf("\n\n   %c", drwDA);
                               for (kaj = 0; kaj < 18; kaj++) printf("%c", drwC4);
    SetConsoleTextAttribute(hConsole, 15);
    printf(" CONTE%cDO ", UA);
    SetConsoleTextAttribute(hConsole, 1);
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


    printf("%c", drwC0); for (kaj = 0; kaj < 46; kaj++) printf("%c", drwC4); printf("%c\n", drwD9);


/// QUESTÕES ( MAIN ) ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // INFORMAÇÕES DO TECLADO
    /*

        seta do teclado para direita  = 77; INUTILIZADO!!!
        seta do teclado para esquerda = 75; INUTILIZADO!!!
        seta do teclado para cima     = 72;
        seta do teclado para baixo    = 80;

        tecla do teclado 'w' = 119;
        tecla do teclado 's' = 115;
        tecla do teclado 'a' = 97;           INUTILIZADO!!!
        tecla do teclado 'd' = 100;

        tecla do teclado 'Enter'     = 13;
        tecla do teclado 'Backspace' = 9;   INUTILIZADO!!!

    */

    SetConsoleTextAttribute(hConsole, saved_attributes);

    do
    {
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    if ( pos == 1 )
    {
            SetConsoleTextAttribute(hConsole, 10);
            gotoxy (5, 26);

            printf("      1. Juntando uma string em outra.       ");

            SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN + 15 );
            gotoxy (20, 4);
            printf(" QUEST%CO - 01 ", AT);

    }

    else
    {

            SetConsoleTextAttribute(hConsole, saved_attributes);
            gotoxy (20, 4);
            printf(" QUEST%CO - 01 ", AT);
    }
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    if ( pos == 2 )
    {
            SetConsoleTextAttribute(hConsole, 10);
            gotoxy (5, 26);

            printf("    2. Tamanho de String e sua Invers%co.    ", at);

            SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN + 15 );
            gotoxy (20, 6);
            printf(" QUEST%CO - 02 ", AT);

    }

    else
    {

            SetConsoleTextAttribute(hConsole, saved_attributes);
            gotoxy (20, 6);
            printf(" QUEST%CO - 02 ", AT);
    }
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    if ( pos == 3 )
    {

            SetConsoleTextAttribute(hConsole, 10);
            gotoxy (5, 26);

            printf("      3. Concatena%c%co de Duas Strings.      ", cd, at);

            SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN + 15 );
            gotoxy (20, 8);
            printf(" QUEST%CO - 03 ", AT);

    }

    else
    {

            SetConsoleTextAttribute(hConsole, saved_attributes);
            gotoxy (20, 8);
            printf(" QUEST%CO - 03 ", AT);
    }
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    if ( pos == 4 )
    {
            SetConsoleTextAttribute(hConsole, 10);
            gotoxy (5, 26);

            printf("  4. Usu%crio e Senha - Usando a <string.h>  ", aa);

            SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN + 15 );
            gotoxy (20, 10);
            printf(" QUEST%CO - 04 ", AT);

    }

    else
    {

            SetConsoleTextAttribute(hConsole, saved_attributes);
            gotoxy (20, 10);
            printf(" QUEST%CO - 04 ", AT);
    }
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    if ( pos == 5 )
    {
            SetConsoleTextAttribute(hConsole, 10);
            gotoxy (5, 26);

            printf("   5. Identificar a vogal 'a' na string.  ", aa);

            SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN + 15 );
            gotoxy (20, 12);
            printf(" QUEST%CO - 05 ", AT);

    }

    else
    {

            SetConsoleTextAttribute(hConsole, saved_attributes);
            gotoxy (20, 12);
            printf(" QUEST%CO - 05 ", AT);
    }
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    if ( pos == 6 )
    {
            SetConsoleTextAttribute(hConsole, 10);
            gotoxy (5, 26);

            printf("   6. A string digitada %c um pal%cndromo??    ", ea, ia);

            SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN + 15 );
            gotoxy (20, 14);
            printf(" QUEST%CO - 06 ", AT);

    }

    else
    {

            SetConsoleTextAttribute(hConsole, saved_attributes);
            gotoxy (20, 14);
            printf(" QUEST%CO - 06 ", AT);
    }
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    if ( pos == 7 )
    {
            SetConsoleTextAttribute(hConsole, 10);
            gotoxy (5, 26);

            printf("   7. A frase digitada %c um pal%cndromo???  ", ea, ia);


            SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN + 15 );
            gotoxy (20, 16);
            printf(" QUEST%CO - 07 ", AT);

    }

    else
    {

            SetConsoleTextAttribute(hConsole, saved_attributes);
            gotoxy (20, 16);
            printf(" QUEST%CO - 07 ", AT);
    }
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    if ( pos == 8 )
    {

            SetConsoleTextAttribute(hConsole, 10);
            gotoxy (5, 26);

            printf(" 8. Usu%crio e Senha - Sem usar a <string.h> ", aa);

            SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN + 15 );
            gotoxy (20, 18);
            printf(" QUEST%CO - 08 ", AT);

    }

    else
    {
            SetConsoleTextAttribute(hConsole, saved_attributes);
            gotoxy (20, 18);
            printf(" QUEST%CO - 08 ", AT);
    }
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    if ( pos == 9 )
    {
            SetConsoleTextAttribute(hConsole, 10);
            gotoxy (5, 26);

            printf("         Encerrar agora o Programa!         ", at);

            SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN + 15 );
            gotoxy (20, 20);
            printf("  FECHAR - X  ", AT);

    }

    else
    {


            SetConsoleTextAttribute(hConsole, saved_attributes);
            gotoxy (20, 20);
            printf("  FECHAR - X  ", AT);
    }
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    c = getch();
    setbuf(stdin, NULL);

    if ( c == 72 or c == 119 ) { pos--; }  /* CIMA */
    if ( c == 80 or c == 115 ) { pos++; }  /* BAIXO */

    if ( pos == 0 ) { pos = 9; }
    if ( pos == 10 ) { pos = 1; }

    } while ( c != 13 );

// DEFINE O QUE SERÁ EXECUTADO CONFORME O USUÁRIO ESCOLHEU
if ( pos == 1 ) { control = 1; }
if ( pos == 2 ) { control = 2; }
if ( pos == 3 ) { control = 3; }
if ( pos == 4 ) { control = 4; }

if ( pos == 5 ) { control = 5; }
if ( pos == 6 ) { control = 6; }
if ( pos == 7 ) { control = 7; }
if ( pos == 8 ) { control = 8; }

if ( pos == 9 ) { control = 9; }

switch ( control )
{

// // // // // // // // // //
case 1:
       system("CLS");
       QUESTAO_1 ();

    // END
    main ();
    pos = 1;
break;

// // // // // // // // // //
case 2:
       system("CLS");
       QUESTAO_2 ();

    // END
    main ();
    pos = 1;
break;

// // // // // // // // // //
case 3:
       system("CLS");
       QUESTAO_3 ();

    // END
    main ();
    pos = 1;
break;

// // // // // // // // // //
case 4:
       system("CLS");
       QUESTAO_4 ();

    // END
    main ();
    pos = 1;
break;

// // // // // // // // // //
case 5:
       system("CLS");
       QUESTAO_5 ();

    // END
    main ();
    pos = 1;
break;

// // // // // // // // // //
case 6:
       system("CLS");
       QUESTAO_6 ();

    // END
    main ();
    pos = 1;
break;

// // // // // // // // // //
case 7:
       system("CLS");
       QUESTAO_7 ();

    // END
    main ();
    pos = 1;
break;

// // // // // // // // // //
case 8:

       system("CLS");
       QUESTAO_8 ();

    // END
    main ();
    pos = 1;
break;

// // // // // // // // // //
case 9: break;

}

// Ao encerrar
system("COLOR 0F");
system("CLS");

int end = 0;

while (end != 15)
{
end++;
SetConsoleTextAttribute(hConsole, end);
for (kaj = 0; kaj < 54; kaj++) printf("%c", drwDB);

}
SetConsoleTextAttribute(hConsole, 4);
for (kaj = 0; kaj < 54; kaj++) printf("%c", drwCD);

    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("\n\n\t  OBRIGADO POR ME TESTAR AT%C MAIS!\n\n\n\n\n\n\n\n\n\n", EA);



// return default colors

}



/// FUNÇÕES -----------------------------------------------------------------------------------------------------------------------------------

void QUESTAO_1 () // LER DUAS STRINGS E JUNTAR-LAS
{
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

// Variáveis de validação

    char ex1_str [20] = "Pessoa ";
    char ex1_sho [20] = " - Segunda string.";
    char ex1_c;

    int contador = 1, digitado = 0, ex1_kaj = 0;

    // colorChange ();

// ENTRADA

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

    printf("\n\n");

// PRINT CONTADOR DE LETRAS DIGITADAS

    printf("\n\n");

    colorChange(13);

    for (kaj = 0; kaj < 54; kaj++) printf("%c", drw9E);

    colorChange(15);

    printf("\n\n Quantas letras foram digitadas: \n");


    for (kaj = 0; kaj < 32; kaj++) printf(" ");
    for (kaj = 0; kaj < 6; kaj++) printf("%c", drwEE);

    colorChange(13);

    printf("\n");

    for (kaj = 0; kaj < 54; kaj++) printf("%c", drw9E);


// PROCESSO DE ESCRITA
colorChange(15);
gotoxy (1, 9); printf("*Aviso: Nem espa%co e nem acentua%c%co funciona!", cd, cd, at);

    // Define a posição de entrada
    gotoxy (17, 6);

    int e1x = 17;

do {

    ex1_c = getch ();

    // se o que for digitado for um número ou uma letra e não for igual a espaço e também for menor do que
    // 20, será printado esse caractere

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

   } while ( ex1_c not_eq 13);

   // AQUI ESTÁ O QUE FOI PEDIDO NA ATIVIDADE

      ex1_str [ex1_kaj] = 0;

      strcat (ex1_str, ex1_sho);






    // PRINT FINAL -> 16

    gotoxy (34, 15);

    printf("\n\n A jun%c%co das strings resulta em:  \n\n\n", cd, at, ea);

    gotoxy (1, 19); printf("--> %s \n\n", ex1_str);

    colorChange(13);

    for (kaj = 0; kaj < 54; kaj++) printf("%c", drw9E);

    colorChange(15);



    // END
    printf("\n\n\n\n\n\n\n\n > Pressione qualquer tecla para continuar!");
    system("PAUSE > NULL");
    system("CLS");
}



// -----------------------------------------------------------------------------------------------------------------------------------




void QUESTAO_2 () // EXIBIR O TAMANHO DE UMA STRING DIGITADA E A ESCREVER DE TRÁS PARA FRENTE
{

    system("CLS");

    // Váriaveis Utilizadas

    char ex2_str [50];
    bool sair = false;

    char fell;

    int size = 0;

    // Print do que irá ser feito

do {
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

    // Recebe a frase do usuário

    colorChange(15);

    printf("\n { Escreva uma frase / string com at%c 50 caracteres }\n\n ", ea);

    printf("\e[?25h");

    colorChange(6);

    // Receive The Stdin
    scanf("%[^\n]", ex2_str);
    setbuf(stdin, NULL);

    size = strlen(ex2_str);

} while ( size >= 50 or size <= 0 or ex2_str[0] == ' ' );


    printf("\e[?25l\n");
    colorChange(15);

    for ( kaj = 0; kaj < 54; kaj++ ) printf("%c", drwCD);

    printf ("\n\n ===> O que voc%c deseja fazer? \n", ec);
    printf ("\n 1 - Exibir o tamanho do texto.");
    printf ("\n 2 - Invers%co da string digitada.\n\n");

    printf (" ==:> ");
    printf("\e[?25h");

    int controle_de_thing = 0;

do {

    fell = getch ();

    if ( fell == '1' ) { controle_de_thing = 1; }
    if ( fell == '2' ) { controle_de_thing = 2; }

   } while ( controle_de_thing == 0 );

switch (controle_de_thing)
{
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

    gotoxy (40, 4); printf("%d", size);

    printf("\n\n\n\n\n > Pressione qualquer tecla para continuar!");
    system("PAUSE > NULL");
    system("CLS");

    sair = true;

break;

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

    printf("\n\n > Pressione qualquer tecla para continuar!");
    system("PAUSE > NULL");
    system("CLS");

    sair = true;

break;

}
    colorChange(15);


}



// -----------------------------------------------------------------------------------------------------------------------------------



void QUESTAO_3 () // CONCATENAÇÃO DE 2 STRINGS EM UMA TERCEIRA
{
    // Variáveis do ex3

    char ex3_string1 [512];    // NÃO VOU ALOCAR -> PC AGUENTA
    char ex3_string2 [512];    // NÃO VOU ALOCAR -> PC AGUENTA

    char ex3_resulta [1024];

    // DRAWN

    colorChange(4);
    for ( kaj = 0; kaj < 54; kaj++) printf("%c", drwC4);

    printf("%c", drwBF); for ( kaj = 0; kaj < 52; kaj++) printf(" "); printf("%c", drwDA);
    printf("%c", drwB3); colorChange(15); printf("     Concatena%c%co de 2 strings em uma terceira!     ", cd, at);    colorChange(4); printf("%c", drwB3);
    printf("%c", drwB3); for ( kaj = 0; kaj < 52; kaj++) printf(" "); printf("%c", drwB3);
    printf("%c", drwC0); for ( kaj = 0; kaj < 52; kaj++) printf("%c", drwC4); printf("%c\n", drwD9);

    colorChange(15);

    // SSSTART

    printf("\n Insira a primeira string: \n\n ==> ");

    colorChange(9);
    scanf("%[^\n]", ex3_string1);
    setbuf(stdin, NULL);
    colorChange(15);

    printf("\n Insira a segunda string: \n\n ==> ");
    colorChange(12);
    scanf("%[^\n]", ex3_string2);
    setbuf(stdin, NULL);

    printf("\n");

    colorChange(4);
    for (kaj = 0; kaj < 54; kaj++) printf("%c", drwCD);
    colorChange(15);

    printf("\n\n *A concatena%c%co das 2 strings resultou em: \n\n==> ", cd, at);

    strcat (ex3_string1, ex3_string2);  // Junta as 2
    strcpy (ex3_resulta, ex3_string1);  // paste on ex3_resulta

    colorChange(6);

    printf("%s", ex3_resulta);




    // END
    colorChange(15);
    printf("\n\n\n > Pressione qualquer tecla para continuar!");
    system("PAUSE > NULL");
    system("CLS");
}

// -----------------------------------------------------------------------------------------------------------------------------------

void QUESTAO_4 () // ADMIN E SENHA -> usando <string.h>
{



    // END
    printf("\n\n\n > Pressione qualquer tecla para continuar!");
    system("PAUSE > NULL");
    system("CLS");
}

// -----------------------------------------------------------------------------------------------------------------------------------

void QUESTAO_5 () // CONTAR VOGAIS A
{
    // END
    printf("\n\n\n > Pressione qualquer tecla para continuar!");
    system("PAUSE > NULL");
    system("CLS");
}

// -----------------------------------------------------------------------------------------------------------------------------------

void QUESTAO_6 () // PALÍNDROMO
{
    // END
    printf("\n\n\n > Pressione qualquer tecla para continuar!");
    system("PAUSE > NULL");
    system("CLS");
}

// -----------------------------------------------------------------------------------------------------------------------------------

void QUESTAO_7 () // VERIFICAR SE UMA FRASE É PALÍNDROMA
{
    // END
    printf("\n\n\n > Pressione qualquer tecla para continuar!");
    system("PAUSE > NULL");
    system("CLS");
}

// -----------------------------------------------------------------------------------------------------------------------------------

void QUESTAO_8 () // ADMIN E SENHA -> sem usar <string.h>
{

    // END
    printf("\n\n\n > Pressione qualquer tecla para continuar!");
    system("PAUSE > NULL");
    system("CLS");
}

// -----------------------------------------------------------------------------------------------------------------------------------

void tutorial ()
{

    colorChange (2);

    printf ("%c", drwC9);
    for (kaj = 0; kaj < 52; kaj++) printf("%c", drwCD);
    printf ("%c", drwBB);

    int tutorial = 0;

do {

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

do {

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

   printf("\n\n\n > Pressione qualquer tecla para continuar!");





    // End
    system("PAUSE > NULL");
    system("CLS");
}

/// FUNÇÕES DE UTILIDADE FORTIFICADA

void gotoxy(int x, int y)
  {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
  }

void colorChange (int color) // PERMITE ESTILIZAÇÃO DE FUNÇÕES FORA DA MAIN -> SIM EU SEI DESDE O INICÍO DEVERIA TER FEITO ASSIM
{                            // MAS NÃO FIZ! MELHORE!
 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
 WORD saved_attributes;
 GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
 saved_attributes = consoleInfo.wAttributes;

 SetConsoleTextAttribute(hConsole, saved_attributes);
 SetConsoleTextAttribute(hConsole, color);

}

