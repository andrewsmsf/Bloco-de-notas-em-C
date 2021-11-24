// Programa que e exibe informações digitadas
// programa usando funções e ponteiros

#include <stdlib.h>
#include <stdio.h>
#include <conio.h> // Biblioteca do Char
#include <locale.h>

char blocoDeNotas (char saida, char palavra);

char saida[]; // Assim como o 'char nome[]' aqui teria que ser 'char saida[]' creio eu ;-; ps: para de ser gay man;
char nome[];
char alt;
char palavra[];

// Criacao da varialvel alt = (alternativa)

// Criacao da variavel nome = (nome da pasta)

// tipo de dado definido pelo usuario

// leitura de dado definido pelo usuario
int main (){
    setlocale(LC_ALL,"Portuguese");
    FILE *ptr;
    char nome;
    // Criacao da varialvel alt = (alternativa)
    printf("\n\n\t### Bem-vindo ao Bloco de Notas ###\n");
    printf("\t> Para criar um bloco de notas digite: 'C' para 'criar'\n");
    printf("\t> Para acessar uma pasta digite o numero correspondente.\n\t> ");
    scanf("%c", &alt);
    
    switch (alt){
        case 'c':
            system("cls");
            // Criacao da variavel nome = (nome da pasta)
            printf("\n\t@@ O programa irá parar se apertar a tecla 'space'. @@");
            printf("\n\tDigite o nome do arquivo\n\t> ");
            gets(nome);
            system("cls");
            printf("\n\tC:/Desktop/Pasta que nao existe no seu PC/%s", nome);
            blocoDeNotas(saida, palavra);
            
        break;
        
        default:
        printf("Comando inválido.\n");
        break;
    }
    return 0;
}

char blocoDeNotas (char saida, char palavra) // Imaginei colocar aqui 'char saida[]' mas mt mÃ£o agora, vai testando ai.
{
    printf("\n\t@@ O programa irá parar se apertar a tecla 'space'. @@");
    printf("\n\t§§ Para sair digite '&' §§\n\n");
    
    while (palavra != '&') {
        printf("> ");
        scanf("%[^\n]", palavra);
        printf("%s\n\n", palavra);
    }
}

//funcoes alocacao dinamica em c