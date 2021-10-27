#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void lobby ();
char blocoDeNotas (char saida);
char escolha (char alt, char nome[]);
char interBlocoDeNotas(char nome[]);

char saida;
char nome[];
char alt;

int main (){

    lobby();
    escolha(alt, nome);
    return 0;
}

void lobby () {

    printf("\n\n\t### Bem-vindo ao Bloco de Notas ###\n");
    printf("\t> Para criar um bloco de notas digite: 'C' para 'criar'\n");
    printf("\t> Para acessar uma pasta digite o numero correspondente.\n\t>");
    scanf("%c", &alt);
}

char escolha (char alt, char nome[])
{
    switch (alt){
        case 'C':
        interBlocoDeNotas(nome);
        break;
        
        default:
        printf("testando\n");
        break;
    }
}

char interBlocoDeNotas (char nome[])
{
    system("cls");
    printf("\n\t@@ O programa irá parar se apertar a tecla 'space'. @@");
    printf("\n\tDigite o nome do arquivo\n\t>");
    scanf("%s", nome);
    system("cls");
    printf("\n\tC:/Desktop/Pasta que nao existe no seu PC/%s", nome);
    blocoDeNotas(saida);
    getch ();
}

char blocoDeNotas (char saida)
{
    printf("\n\t¨¨ Para sair digite 'x' ¨¨\n");

    for (char i = 0; ; i++) {
        printf("\t");
        scanf("%s", &saida);
        
        if (saida == 'x'){
            system("cls");
            main();
            return 1;
        }
    }
}