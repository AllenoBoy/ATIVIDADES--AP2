/*
  
  MIL PERDÕES PELA MA ORGANIZAÇÃO, MAS DÁ PRA ENTENDER UTILIZANDO O SWITCH QUE CHAMA AS FUNÇÕES.
  
  .ENFIM SÓ COPIAR, COLAR E TESTAR DIRETAMENTE NA SUA IDE;
  
*/

// | BIBLIOTECAS UTILIZADAS | MOTIVO DO SEU USO
     # include <stdio.h>  //   printf(); scanf();
     # include <stdlib.h> //   system(); if(); for ();
     # include <conio.h>  //   getch();
     # include <windows.h>//   Sleep();
     # include <time.h>   //   srand();
     # include <stdbool.h>//   bool variables;

// VARIÁVEIS GLOBAIS
int kaj = 0, jak = 0; // GLOBAL LOOP CONTROL VARIABLE


// Menu

   char c;

// Acentuação

/* --------------------------------------- */

   // til
         // Caixa Alta
            int a_tA = 199; // # Ã

         // Caixa Baixa
            int a_tB = 198; // # ã

/* --------------------------------------- */

   // agudo
           // Caixa Alta
              int e_aA = 144; // # É
              int o_aA = 224; // # Ó

           // Caixa Baixa
              int e_aB = 130; // # é
              int a_aB = 160; // # á
              int o_aB = 162; // # ó
              int u_aB = 163; // # ú



/* --------------------------------------- */

   // circunflexo
                 // Caixa Alta

                 // Caixa Baixa
                    int a_cB = 131; // # â
                    int e_cB = 136; // # ê

/* --------------------------------------- */

   // especiais

      int c_un = 135; // Cedilha

/* --------------------------------------- */

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void quest10 ()
{

    int curso, s = 0;
    int opiniao;
    bool sair = false;

    // calculos

    int alunos = 0;
    int comp = 0;
    int mate = 0;

    // resultados

    int pessimo = 0;
    int regular = 0;
    int excelente = 0;

                        // sem tratamento de erros
while ( sair != true )
{
     curso = 0;

     system("CLS");
     printf("-------------------------------------\n");
     printf("\n     ~ QUEST%CO 7 - LABORAT%cRIO ~\n", a_tA, o_aA);
     printf("\n-------------------------------------");

    // CURSO DO ALUNO

        printf("\n\n > Voc%c %c de qual curso? ", e_cB, e_aB);
        printf("\n\n 1 - Ci%cncia da computa%c%co.", e_cB, c_un, a_tB);
        printf("\n 2 - Matem%ctica.\n", a_aB);

        printf("\n=:> ");
        scanf("%d", &curso);
        setbuf(stdin, NULL);

        // Curso
        if ( curso == 1 ) { alunos++; comp++; }
        if ( curso == 2 ) { alunos++; mate++; }

        // Quit
        if ( curso == -1 ) { break; }

    // AVALIAÇÃO

        system("CLS");
        printf("-------------------------------------\n");
        printf("\n     ~ QUEST%CO 7 - LABORAT%cRIO ~\n", a_tA, o_aA);
        printf("\n-------------------------------------");

        printf("\n\n > O que voc%c achou da comida? ", e_cB, e_aB);
        printf("\n\n 0 - P%cssima.", e_aB);
        printf("\n 5 - Regular.", e_aB);
        printf("\n 10 - Excelente.\n", e_aB);

        printf("\n=:> ");
        scanf("%d", &opiniao);
        setbuf(stdin, NULL);

        // Opiniao
        if ( curso == 1 && opiniao == 10 ) { excelente++; }
        if ( curso == 2 && opiniao == 5  ) { regular++;  }
        if ( opiniao == 0 ) { pessimo++; }


        // Quit
        if ( opiniao == -1 ) { break; }

}

// PROCESSO DE ESTILIZAÇÃO DO CONSOLE           <-- COMEÇA BEM AQUI

system("MODE CON:COLS=79 lines=18");

for ( s = 0; s < 79; s++ ) printf("-");

printf("\n\n");

for ( s = 0; s < 27; s++ ) printf(" ");

printf("| Resultado da Pesquisa |");

for ( s = 0; s < 27; s++ ) printf(" ");

printf("\n\n");

for ( s = 0; s < 79; s++ ) printf("-");

// PROCESSO DO CÁLCULO DO PERCENTUAL
// percentual = (b * 100) / a;

float resultado_excelente;
float resultado_regular;
float resultado_pessimo;

      resultado_pessimo = ( (float) pessimo * 100 ) / (float) alunos;

      resultado_regular = ( (float) regular * 100 ) / (float) alunos;

      resultado_excelente = ( (float) excelente * 100 ) / (float) alunos;


// CONTINUANDO...

printf("\n\n .O percentual de alunos da computa%c%co que acharam a refei%c%co excelente = %.1f", c_un, a_tB, c_un, a_tB, resultado_excelente);
printf("\n .O percentual de alunos da matem%ctica que acharam a refei%c%co regular   = %.1f", a_aB, c_un, a_tB, resultado_regular);
printf("\n .O percentual dos alunos da faculdade que acharam a refei%c%co p%cssima   = %.1f\n\n", c_un, a_tB, e_aB, resultado_pessimo);

for ( s = 0; s < 79; s++ ) printf("-");

// END AFTER LOOPS

printf("\n\n");

for ( s = 0; s < 28; s++ ) printf(" ");

printf(" Fonte: R.U de Narnia");

printf("\n\n\n");

// PROCESSO DE ESTILIZAÇÃO DO CONSOLE           <-- TERMINA BEM AQUI

printf("\e[?25h");
printf("\n # Aperte Qualquer Tecla Para Voltar ao Menu Principal!");
system("PAUSE > NULL");

}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void quest2 ()
{

    int d2;
    int c, d, u;

     // MENU

     printf("-------------------------------------");
     printf("\n     ~ QUEST%CO 2 - LABORAT%cRIO ~\n", a_tA, o_aA);
     printf("-------------------------------------\n");

     // START

     printf("\n Insira um numero de tamanho 3: ");
     scanf("%d", &d2);
     setbuf(stdin, NULL);

    // OPERATIONS
    c = d2 / 100; // PEGA A CENTENA
    d = d2 % 100; // PEGA A DEZENA
    u = d   %  10; // PEGA A UNIDADE
    d = d   /  10; // PEGA A DEZENA FINAL

    printf("\n > Valor digitado: %d", d2);
    printf("\n\n  - Centena: %d \n  - Dezena : %d \n  - Unidade: %d\n\n\n\n\n\n\n", c, d, u);

    printf("\e[?25h");
    printf("\n # Aperte Qualquer Tecla!");
    system("PAUSE > NULL");

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void quest3 ()
{

    int celsius = 0;
    float kelvin = 0, fahrenheit = 0;
    char c2;
    bool check = false;

do {
    // MENU

     printf("-------------------------------------");
     printf("\n     ~ QUEST%CO 3 - LABORAT%cRIO ~\n", a_tA, o_aA);
     printf("-------------------------------------\n");

    // START

    printf("\n Insira o valor para converter: ");
    scanf("%d", &celsius);
    setbuf(stdin, NULL);

    printf("\n - Para que voc%c deseja converter?\n"
           "\n 1 - Kelvin \n 2 - Fahrenheit\n\n /> ", e_cB);

    // CONVERTIONS

    c2 = getch();

    if (c2 == '1') { check = true; }
    if (c2 == '2') { check = true; }

    switch (c2)
    {
        case '1':
            system("CLS");
            kelvin = (float) celsius + 273,15;
            printf("-------------------------------------\n");

            printf(" Convertendo de Celsius para Kelvin");

            printf("\n-------------------------------------\n\n");
            printf("\n Convertendo %d graus Celsius! \n\n Temos = %0.2f Kelvin\n\n\n\n\n\n\n\n\n\n", celsius, kelvin);

        break;

        case '2':
            system("CLS");
            fahrenheit = ( (float) celsius * 9 / 5 ) + 32;

            printf("-------------------------------------\n");

            printf(" Convertendo de Celsius para Fahre.");

            printf("\n-------------------------------------\n\n");
            printf("\n Convertendo %d graus Celsius! \n\n Temos = %0.2f Fahrenheit\n\n\n\n\n\n\n\n\n\n", celsius, fahrenheit);


        break;
    }

} while (check != true);

    printf("\e[?25h");
    printf("\n # Aperte Qualquer Tecla!");
    system("PAUSE > NULL");

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void quest4 ()
{
    /* 3 VALORES RECEBIDOS NA STDIN */
    int q4v1 = 0, q4v2 = 0, q4v3 = 0;

    int maxNumberOnQ4 = 0;
    int NumberonQ4Som = 0;

    // MENU

     printf("-------------------------------------");
     printf("\n     ~ QUEST%CO 4 - LABORAT%cRIO ~\n", a_tA, o_aA);
     printf("-------------------------------------\n");

    // START

    printf("\n > %c um tri%cngulo? Descubra!\n\n", e_aA, a_cB);

//treatment1    // scanf("%d", var) is trash!
do {
    printf(" <#> Insira o primeiro valor: ");
    scanf("%d", &q4v1);
    setbuf(stdin, NULL);
   } while ( q4v1 < 1 );


//treatment2
do {
    printf(" <#> Insira o segundo  valor: ");
    scanf("%d", &q4v2);
    setbuf(stdin, NULL);
   } while ( q4v2 < 1 );


//treatment3
do {
    printf(" <#> Insira o terceiro valor: ");
    scanf("%d", &q4v3);
    setbuf(stdin, NULL);
   } while ( q4v3 < 1 );

    // MAKING THE COMPARATIONS

    if ( q4v2 + q4v3 > q4v1 && q4v1 + q4v2 > q4v3 && q4v3 + q4v1 > q4v2 )
    {
        printf("\n %c um Tri%cngulo!", e_aA, a_cB);

        if ( q4v1 == q4v2 && q4v1 == q4v3 ) printf(" | Equilatero |");

        else
            if ( q4v1 == q4v2 || q4v1 == q4v3 || q4v2 == q4v3 ) printf(" | Isosceles |");

            else printf(" | Escaleno |", e_aA);

    }
    else
        printf("\n N%co %c um Tri%cngulo!", a_tB, e_aB, a_cB);

    printf("\n\n\n\n\n\n");

    // ENDING

    printf("\e[?25h");
    printf("\n # Aperte Qualquer Tecla!");
    system("PAUSE > NULL");

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void quest5 ()
{
    // VARIÁVEIS DO quest5
       int q5 = 0;

    // MENU

     printf("-------------------------------------");
     printf("\n     ~ QUEST%CO 6 - LABORAT%cRIO ~\n", a_tA, o_aA);
     printf("-------------------------------------\n");

     printf("\n    < TABELA ASCII -- FORMATADA >\n\n # Pressione Qualquer Tecla! ");
     getch();

    // IMPRESSÃO
    printf("\e[?25l");

    system("MODE CON:COLS=35 LINES=137");
    HWND consoleWindow = GetConsoleWindow();
	SetWindowPos( consoleWindow, 0, 500, 0, 0, 0, SWP_NOSIZE | SWP_NOZORDER );

    printf("-----------------------------------");
    printf("\n          | Lista Gerada | \n");
    printf("-----------------------------------");

    printf("\n < DECIMAL >   < HEXA >   < CHAR >");

       while (q5 != 128)
       {
        Sleep(10);
        printf("\n     %0.3d          %0.2x          %c", q5, q5, q5);
        q5++;
       }
       printf("\n-----------------------------------");

    printf("\e[?25h");
    printf("\n # Aperte Qualquer Tecla!");
    system("PAUSE > NULL");

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void quest6 ()  // CÁLCULO DE RENDA
{

    int entry;

    float rendaUsuario = 0;
    float subtrUsuario = 0;
    float resulUsuario = 0;

    float taxa8 = 0, taxa18 = 0, taxa28 = 0;
do
{
    // MENU
     system("CLS");
     printf("-------------------------------------");
     printf("\n     ~ QUEST%CO 5 - LABORAT%cRIO ~\n", a_tA, o_aA);
     printf("-------------------------------------\n");

     //User Entry

     printf("\n  Insira seu sal%crio usando ponto!\n", a_aB);
     printf("\n -> ");
     scanf("%d", &entry);
     setbuf(stdin, NULL);

} while ( entry <= 0 );

    // casting because float on stdin have some issues
    rendaUsuario = (float) entry;

    // PROCEDURES

       if ( rendaUsuario <= 2000.00 ) { printf("\n     Parab%cns voc%c est%c Isento!\n\n\n\n\n\n\n\n", e_aB, e_cB, a_aB); }


       else
       {
            // CÁLCULO QUE APLICA O DESCONTO DE ISENÇÃO
            subtrUsuario = rendaUsuario - 2000;

            // LÓGICA

            taxa8 = subtrUsuario - 1000;
            taxa18 = taxa8;
            taxa8 = subtrUsuario - taxa8;
            taxa28 = taxa18 - 1500;

            taxa8 = taxa8 * 0.08;
            taxa18 = taxa18 * 0.18;
            taxa28 = taxa28 * 0.28;


            if ( rendaUsuario > 2000.01 && rendaUsuario < 3000.00 )
            {

                resulUsuario = taxa8;

            }
            if ( rendaUsuario > 3000.01 && rendaUsuario < 4500.00 )
            {

                resulUsuario = taxa8 + taxa18;

            }
            if ( rendaUsuario > 4500.00 )
            {

                resulUsuario = taxa8 + taxa18 + taxa28;

            }

       printf("\n Seu imposto de renda = R$ %.2f\n", resulUsuario);


       }



    printf("\e[?25h");
    printf("\n # Aperte Qualquer Tecla!");
    system("PAUSE > NULL");

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void quest7 ()
{

    char cq7;
    bool eightHours = false;
    int robson = 0;

    int vetor7 [5];
    int max = 0;
    int maior = 0;
    int higher = 0;

    do {

    // MENU
     system("CLS");
     printf("\e[?25l"); // ESCAPE SEQUENCE
     printf("-------------------------------------");
     printf("\n     ~ QUEST%CO 8 - LABORAT%cRIO ~\n", a_tA, o_aA);
     printf("-------------------------------------\n");

    // START

     printf("\n Voc%c deseja escrever a matriz ou \n a gerar randomicamente?\n", e_cB);
     printf("\n 1 - Para Gerar Randomicamente.");
     printf("\n 2 - Para Escrever-la.");

     printf("\e[?25h");

     printf("\n\n -> ");

     cq7 = getch();

     if ( cq7 == '1') { eightHours = true; }
     if ( cq7 == '2') { eightHours = true; }

     } while (eightHours != true);

     // FILLING

     switch (cq7)
     {

              case '1':

                system("CLS");
                printf("\e[?25l");
                printf("-------------------------------------");
                printf("\n\n         PREENCHENDO O VETOR\n\n");
                printf("-------------------------------------\n");


                for (robson = 0; robson < 18; robson++ )
                { Sleep(150); printf(" +"); }
                Sleep(100);
                printf("\n-------------------------------------\n");

        srand(time(NULL));

                printf("\n RESULTADO = ");

                for (max = 0; max < 5; max++)
                {
                vetor7 [max] = rand () % 50 + 2;

                printf(" %.2d", vetor7[max]);

                }

                printf("\n");

                for (max = 0; max < 5; max++)
                {

                 if ( vetor7 [max] > maior ) { maior = vetor7 [max]; higher = max; }

                }

                printf("\n O maior elemento do vetor %c = %d", e_aB, maior);
                 printf("\n A sua posi%c%co nesse vetor %c = %0.2d\n\n\n\n\n", c_un, a_tB, e_aB, higher);

              break;

              case '2':

                  system("CLS");
                printf("\e[?25l");
                printf("-------------------------------------");
                printf("\n\n    PREENCHA O VETOR DE TAMANHO 5\n\n");
                printf("-------------------------------------\n");

            for (max = 0; max < 5; max++)
            {

                printf("\n \\> Posi%c%co [ %.2d ]: ", c_un, a_tB, max);  printf("\e[?25h");
                scanf("%d", &vetor7[max]);
                setbuf(stdin, NULL);

            }

            for (max = 0; max < 5; max++)
                {

                 if ( vetor7 [max] > maior ) { maior = vetor7 [max]; higher = max; }

                }

            system("CLS");

                printf("-------------------------------------");
                printf("\n\n         VETOR DE TAMANHO 5\n\n");
                printf("-------------------------------------\n");

                printf("\n RESULTADO: ");

                for (max = 0; max < 5; max++)
                {


                printf(" %.2d", vetor7[max]);

                }

                printf("\n\n");

            printf("\n O maior elemento do vetor %c = %d", e_aB, maior);
            printf("\n A sua posi%c%co nesse vetor %c = %0.2d\n\n\n\n\n\n\n", c_un, a_tB, e_aB, higher);

            break;

     }





    printf("\e[?25h");
    printf("\n # Aperte Qualquer Tecla!");
    system("PAUSE > NULL");

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void quest8 ()
{

    int q8m [4] [4];
    int q8ml;
    int q8mc;

    int isSupaTriangle = 0;
    int compa = 0;

    HWND consoleWindow = GetConsoleWindow();
	SetWindowPos( consoleWindow, 0, 500, 0, 0, 0, SWP_NOSIZE | SWP_NOZORDER );

    system("MODE CON:COLS=39 lines=50");

    // MENU

     printf("---------------------------------------\n");
     printf("\n      ~ QUEST%CO 9 - LABORAT%cRIO ~\n\n", a_tA, o_aA);
     printf("---------------------------------------\n");
     printf("\n \t       MATRIZ 4X4\n\n");
     printf("---------------------------------------\n");
     printf("\n \t\t   | Linha | Coluna |\n\n");
     printf("_______________________________________\n\n");

     isSupaTriangle = 0;

       for (q8ml = 0; q8ml < 4; q8ml++)
            for (q8mc = 0; q8mc < 4; q8mc++)
      {
            printf(" > Insira os valores [ %d ] [ %d ] = ", q8ml, q8mc );
            scanf("%d", &q8m [q8ml] [q8mc]);
      }

      system("CLS");

      SetWindowPos( consoleWindow, 0, 90, 50, 0, 0, SWP_NOSIZE | SWP_NOZORDER );  // PERMITE DEFINIR A POSIÇÃO DO CONSOLE

      system("MODE CON: COLS=37 LINES=20"); // Define the size of the console with Colunms and Lines

      printf("-------------------------------------\n\n");
      printf("         MATRIZ 4X4 - GERADA\n\n");
      printf("-------------------------------------\n\n");

      printf("\t  ");

      for (q8ml = 0; q8ml < 4; q8ml++)
            for (q8mc = 0; q8mc < 4; q8mc++)
      {
                printf(" %.2d ", q8m [q8ml] [q8mc]);

                if (q8mc == 3) { printf("\n\t  ");}

      }

          // CÁLCULOS PARA SABER SE É UMA MATRIZ
          // TRIANGULAR SUPERIOR -> MEH

          // NOTE: LEARN HASH TABLE

          if (q8m [1] [0] == 0) { isSupaTriangle++; }
          if (q8m [2] [0] == 0) { isSupaTriangle++; }
          if (q8m [2] [1] == 0) { isSupaTriangle++; }
          if (q8m [3] [0] == 0) { isSupaTriangle++; }
          if (q8m [3] [1] == 0) { isSupaTriangle++; }
          if (q8m [3] [2] == 0) { isSupaTriangle++; }

          // FINALIZAÇÃO

          if ( isSupaTriangle == 6 )
          {
               printf("\n-------------------------------------\n");
               printf("\n Observa%c%co: %c uma matriz triangular \n superior!\n\n", c_un, a_aB, e_aA, a_tB, e_aA);

          }
          else
          {
            printf("\n-------------------------------------\n");
            printf("\n Observa%c%co: N%co %c uma matriz \n triangular superior!\n\n", c_un, a_tB, a_tB, e_aB);
          }



    printf("\e[?25h");
    printf("\n # Aperte Qualquer Tecla!");
    system("PAUSE > NULL");

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void quest9 ()
{
    int q9 [3] [3];      // matriz
    int ql9;             // linha
    int qc9;             // coluna
    bool isMagic = false;// Formated Validator
    char iDoh;
    bool Ido = false;

    // MENU

    /*

        EXEMPLOS DE ENTRADA QUE RESULTAM EM UM QUADRADO MÁGICO:


        STDIN:                  STDIN:

        8 0 7                   2 9 4
        4 5 6                   7 5 3
        3 10 2                  6 1 8

     QUADRADO MÁGICO!       QUADRADO MÁGICO!

    */


do {
     system("CLS");
     printf("-------------------------------------");
     printf("\n    ~ QUEST%CO 10 - LABORAT%cRIO ~\n", a_tA, o_aA);
     printf("-------------------------------------\n");

     // PROGRAMA

     printf("\n Voc%c deseja escrever a matriz ou \n a gerar randomicamente?\n", e_cB);
     printf("\n 1 - Para Gerar Randomicamente.");
     printf("\n 2 - Para Escrever-la.");

     printf("\n\n -> ");

     iDoh = getch();
     setbuf(stdin, NULL);

     if (iDoh == '1') { Ido = true; }
     if (iDoh == '2') { Ido = true; }

   } while (Ido != true);

switch (iDoh)
{
     case '1':

     system("CLS");
     printf("\n Gerando a matriz");

                                   for ( kaj = 0; kaj < 3; kaj++ ) { Sleep(600); printf("."); } Sleep(100);
                                   for ( kaj = 0; kaj < 3; kaj++ ) { Sleep(200); printf("\b \b"); } Sleep(100);
                                   for ( kaj = 0; kaj < 17; kaj++ ) { printf("\b \b"); }

                    // Filling
                    srand(time(NULL));
                    // linha e coluna
                    for (ql9 = 0; ql9 < 3; ql9++)
                        for (qc9 = 0; qc9 < 3; qc9++)
                    {
                        q9[ql9] [qc9] = rand () % 35;
                    }

      break;

      case '2':
          system("CLS");
          printf("\n \t\t  | Linha | Coluna |\n\n");

      for (ql9 = 0; ql9 < 3; ql9++)
            for (qc9 = 0; qc9 < 3; qc9++)
      {
            printf(" Insira os valores [ %d ] [ %d ] = ", ql9, qc9 );
            scanf("%d", &q9 [ql9] [qc9]);
      }


      break;

}


     system("CLS");
     printf("-------------------------------------\n");
     printf("\n       ! A Matriz foi Gerada !\n\n");
     printf("<----------------------------------->\n\n\t     ");

     for (ql9 = 0; ql9 < 3; ql9++)
                        for (qc9 = 0; qc9 < 3; qc9++)
                    {
                        printf(" %.2d", q9 [ql9] [qc9] );
                        if (qc9 == 2) { printf("\n\t     "); }
                    }
      printf("\n<----------------------------------->");

      // Process

      int somaLinha  [3]   = { 0, 0, 0 };
      int somaColuna [3]   = { 0, 0, 0 };
      int somaDiagonal     = 0;
      int test9;
      int arm = 3;

      for (ql9 = 0; ql9 < 3; ql9++)
                        for (qc9 = 0; qc9 < 3; qc9++)
                    {

      // Soma Linha:
      if ( qc9 == 0 ) { somaLinha[0] = q9 [ql9] [qc9] + somaLinha[0]; }
      if ( qc9 == 1 ) { somaLinha[1] = q9 [ql9] [qc9] + somaLinha[1]; }
      if ( qc9 == 2 ) { somaLinha[2] = q9 [ql9] [qc9] + somaLinha[2]; }

      // Soma Coluna:
      if ( ql9 == 0 ) { somaColuna[0] = q9 [ql9] [qc9] + somaColuna[0]; }
      if ( ql9 == 1 ) { somaColuna[1] = q9 [ql9] [qc9] + somaColuna[1]; }
      if ( ql9 == 2 ) { somaColuna[2] = q9 [ql9] [qc9] + somaColuna[2]; }

      // Soma Diagonal:
      if ( ql9 == 0 && qc9 == 0 ) { somaDiagonal = q9 [ql9] [qc9] + somaDiagonal; }
      if ( ql9 == 1 && qc9 == 1 ) { somaDiagonal = q9 [ql9] [qc9] + somaDiagonal; }
      if ( ql9 == 2 && qc9 == 2 ) { somaDiagonal = q9 [ql9] [qc9] + somaDiagonal; }

                    }

      // Validation Finalization Minecraft

      for (test9 = 0; test9 < 3; test9++)
      {

      if ( somaLinha[test9] == somaColuna[test9] ) { arm--; }

      }

      if ( arm == 0 && somaLinha[0] == somaDiagonal ) { isMagic = true; }


      // Display Result
      if (isMagic == true) { printf("\n\n > %c um quadrado m%cgico!\n\n\n\n\n", e_aA, a_aB);}
      else                 { printf("\n\n > N%co %c um quadrado m%cgico!\n\n\n\n\n", a_tB, e_aB, a_aB);}


     printf("\e[?25h");
     printf("\n # Aperte Qualquer Tecla!");
     system("PAUSE > NULL");

}

void quitProgram ()
{
    Sleep(250);
    printf("\e[?25l");

            // Tela de Finalização
            printf("-------------------------------------");
                printf("\n       Obrigado por me testar!\n");
            printf("-------------------------------------\n");

            printf("\n    < Documenta%c%co do Programa >\n", c_un, a_tB);

            printf("\n 1 - Data: 09 / 01 / 2023;");
            printf("\n 2 - Atividade da Disciplina de Ap2;");
            printf("\n 3 - Docente - Ana Paula;");
            printf("\n 4 - Discente - Allison J%cnior;", u_aB);
            printf("\n 5 - Laborat%crio 01;", o_aB);
            printf("\n 6 - IDE: Code::Blocks;");
            printf("\n 7 - NO CBP PROJECT;\n\n\n");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void main ()                              // main don't need to return nothing so let's just use void
{
    system("CLS");                        // Clear Screen
    printf("\e[?25l");                    // Hide the cursor (the thing that keep blinking)
    system("TITLE ROBSON 1.0.12.33");     // Generic Console Title Name

    HWND consoleWindow = GetConsoleWindow();                                    // PERMITE DEFINIR A POSIÇÃO DO CONSOLE
    SetWindowPos( consoleWindow, 0, 90, 50, 0, 0, SWP_NOSIZE | SWP_NOZORDER );  // PERMITE DEFINIR A POSIÇÃO DO CONSOLE

    system("MODE CON: COLS=37 LINES=20"); // Define the size of the console with Colunms and Lines
    setbuf(stdin, NULL);                  // Clear Keyboard Buffer

// CÓDIGO

    // INFORMAÇÕES DO MENU
                            printf("-------------------------------------");
                            printf("\n ~ LABORATORIO 01 - 09 / 01 / 2023 ~\n");
                            printf("-------------------------------------\n");

                            printf("\n [ 1 ] - Printar Dezena.");
                            printf("\n [ 2 ] - Convers%co de Celsius.", a_tB);
                            printf("\n [ 3 ] - %c um tri%cngulo?", e_aA, a_cB);
                            printf("\n [ 4 ] - C%clculo de Renda.", a_aB);
                            printf("\n [ 5 ] - Tabela ASCII.");
                            printf("\n [ 6 ] - Pesquisa RU de Narnia.");
                            printf("\n [ 7 ] - Maior Elemento de um Vetor.");
                            printf("\n [ 8 ] - Matriz Triangular Superior.");
                            printf("\n [ 9 ] - Quadrado M%cgico.", a_aB);
                            printf("\n [ x ] - Encerrar Programa.\n");

                            printf("\n-------------------------------------\n");
                            printf("\e[?25h"); // Show Cursor

    // OPÇÕES

    printf("\n \\> Comando: ");
    c = getch();                // Better option on menus <Don't need stdin treatment>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*Separação para melhorar a vista*/

// SWITCH COM AS FUNÇÕES

   switch (c)  /* OBSERVAÇÃO: O PROGRAMA APÓS EXECUTAR UMA FUNÇÃO AUTOMATICAMENTE RETORNA AO MENU! */
{
   case '1':
   system("CLS");
   setbuf(stdin, NULL);
   quest2(); main();
   break;

/* SEPARATION COMMENT */

            case '2':
            system("CLS");
            setbuf(stdin, NULL);
            quest3(); main();
            break;

/* SEPARATION COMMENT */

   case '3':
   system("CLS");
   setbuf(stdin, NULL);
   quest4(); main();
   break;

/* SEPARATION COMMENT */

            case '4':
            system("CLS");
            setbuf(stdin, NULL);
            quest6(); main();
            break;

/* SEPARATION COMMENT */

   case '5':
   system("CLS");
   setbuf(stdin, NULL);
   quest5(); main();
   break;

/* SEPARATION COMMENT */

            case '6':
            system("CLS");
            setbuf(stdin, NULL);
            quest10(); main();
            break;

/* SEPARATION COMMENT */

   case '7':
   system("CLS");
   setbuf(stdin, NULL);
   quest7(); main();
   break;

/* SEPARATION COMMENT */

            case '8':
            system("CLS");
            setbuf(stdin, NULL);
            quest8(); main();
            break;

/* SEPARATION COMMENT */

   case '9':
   system("CLS");
   setbuf(stdin, NULL);
   quest9(); main();
   break;

/* SEPARATION COMMENT */

            case 'x':       // x without shift
            system("CLS");
            setbuf(stdin, NULL);
            quitProgram ();
            break;

            case 'X':       // X with shift
            system("CLS");
            setbuf(stdin, NULL);
            quitProgram ();
            break;

/* SEPARATION COMMENT */

default: setbuf(stdin, NULL); main(); break; // Caso ocorra algum bug o usuário volta para o menu.

} // End Switch



} // End Void
