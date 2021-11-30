#include <stdio.h>  // FILE
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>// portuguÊs

char an[400]; // é o nome do arquivo / arquivoNome
void escrever (char an[400]);
void ler (char an[400]);

int main() {
	//definindo as paginas para UTF-8 e padrão windows
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	// definindo o caracter latino
	SetConsoleOutputCP(CPAGE_UTF8);
	system("color 70"); //color XY
	char opc;
	printf("\n");
	printf(".########..##........#######...######...#######....########..########...##....##..#######..########....###.....######.\n");
	printf(".##.....##.##.......##.....##.##....##.##.....##...##.....##.##.........###...##.##.....##....##......##.##...##....##\n");
	printf(".##.....##.##.......##.....##.##.......##.....##...##.....##.##.........####..##.##.....##....##.....##...##..##......\n");
	printf(".########..##.......##.....##.##.......##.....##...##.....##.######.....##.##.##.##.....##....##....##.....##..######.\n");
	printf(".##.....##.##.......##.....##.##.......##.....##...##.....##.##.........##..####.##.....##....##....#########.......##\n");
	printf(".##.....##.##.......##.....##.##....##.##.....##...##.....##.##.........##...###.##.....##....##....##.....##.##....##\n");
	printf(".########..########..#######...######...#######....########..########...##....##..#######.....##....##.....##..######.\n");
	
	printf("\n\n\t###INSTRUÇÕES###\n\tO Bloco de Notas requer que o usuario siga todas as regras a seguir para que não cause nenhum erro de\n\tqualquer natureza para o programa e o documento.\n\t1 - Não pressione shift e - ao mesmo tempo enquanto escreve no bloco de notas\n\t2 - Evite fechar o programa no meio da execução\n\t3 - Não coloque no nome do arquivo símbolos bloqueados [ | , { , etc]\n\t4 - Ao escrever o nome do arquivo, adicione .txt no final para definir que será um arquivo de texto\n\t5 - Certifique-se que o arquivo esteja no mesmo diretório que o programa\n\t6 - Aproveite o uso do programa e agradeça aos criadores :D\n");
	printf("\n\tNome do arquivo: ");
	gets(an);
	printf("\n\tOpções que o programa oferece: ");
	printf("\n\tescrever > 'w'");
	printf("\n\tler > 'r'");
	printf("\n\tanexar > 'a'");
	printf("\n\texit > 'e'");
	printf("\n\t> ");
	scanf("%c", &opc);
	
	switch (opc){
		case 'w':
			escrever(an);
			exit(1);
		case 'r':
			ler(an);
			exit(1);
		case 'a':
			anexar(an);
			exit(1);
		case 'e':
			exit(1);
		break;
	}
	//voltando ao padrão windows
	getch();
	system("pause");
	SetConsoleOutputCP(CPAGE_DEFAULT);
	return 0;
}

void escrever(char an[400])
{
	FILE *fp = fopen(an, "w"); // abrindo o arquivo fopen / criando o ponteiro / o w é o tipo de abertura = escrever
	char in; // in é para a escrita
	if(fp){
		system("cls");
		printf("\n\tPara finalizar digite shitf + -\n");
		scanf("%c", &in); // lendo apenas 1 caracter
		while(in != '_'){ // condição para finalizar o programa
			fputc(in, fp); // fputc ( caracter, local do arquivo)
			scanf("%c", &in);
		}
		fclose(fp); // fechando o arquivo fclose
	}
	else{
        printf("\n\tERRO ao abrir o arquivo!.\n");
	}
}

void ler(char an[400])
{
	FILE *fp = fopen(an,"r"); // o r é o tipo de abertura = letra
	char in;
	if(fp){
		system("cls");
		printf("\n\tImagem do texto do arquivo: %s\n\n", an);
		while(!feof(fp)){ // feof = f end o file / essa função verifia se chegou ao fim do arquivo e se chegar ao fim do arquivo retorna true
			in = fgetc(fp); // atribuição / a função fgetc ela recebe o ponteiro para o arquivo e retorna 1 caracter
			printf("%c", in); // mostrar o caracter
		}
		fclose(fp);
	}
	else{
        printf("\n\tERRO ao abrir o arquivo!.\n");
	}
}

void anexar(char an[400])
{
	FILE *fp = fopen(an, "a"); // abrindo o arquivo fopen / criando o ponteiro / o a é o tipo de abertura = anexar
	char in; // in é para a escrita
	if(fp){
		system("cls");
		printf("\n\tPara finalizar digite shitf + -\n");
		scanf("%c", &in); // lendo apenas 1 caracter
		while(in != '_'){ // condição para finalizar o programa
			fputc(in, fp); // fputc ( caracter, local do arquivo)
			scanf("%c", &in);
		}
		fclose(fp); // fechando o arquivo fclose
	}
	else{
        printf("\n\tERRO ao abrir o arquivo!.\n");
	}
}