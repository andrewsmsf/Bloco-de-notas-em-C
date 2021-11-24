#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
//#include <locale.h> // portuguÊs
#include <conio.h>


void escrever (char an[]);
void ler (char an[]);
//void adicionar (char an[]);

void escrever(char an[])
{
	FILE *fp = fopen(an, "w");
	char in[600];
	if(fp){
		printf("Para finalizar digite 1 caracter.\n");
		scanf("%600[^\n]", in);
		scanf("%c");
		while(strlen(in) > 1) {
			fputs(in, fp);
			fputc(' ', fp); //fputc('\n', fp);
			scanf("%600[^\n]", in);
			scanf("%c");
		}
		fclose(fp);
	}
	else{
        printf("\n\tERRO ao abrir o arquivo!.\n");
	}
}

void ler(char an[])
{
	FILE *fp = fopen(an,"r");
	char in[600];
	if(fp){
		printf("\n\tImagem do texto do arquivo: %s\n\n", an);
		while(!feof(fp)){
			if(fgets(in, 600, fp)){
				printf("\n%s", in);
			}
		}
		fclose(fp);
	}
	else{
        printf("\n\tERRO ao abrir o arquivo!.\n");
	}
}

/*void adicionar(char an[])
{
	FILE *fp = fopen(an,"a+");
	char in[600];
	if(fp){
		printf("\n\tArquivo para editar: %s\n", an);
		printf("\n\tPara finalizar digite 1 caracter.\n");
		while(!feof(fp)){
			if(fgets(in, 600, fp)){
				printf("\n%s", in);
			}
		}
		scanf("%600[^\n]", in);
		scanf("%c");
		while(strlen(in) > 1){
			fputs(in, fp);
			fputc(' ', fp); //fputc('\n', fp);
			scanf("%600[^\n]", in);
			scanf("%c");
		}
		fclose(fp);
	}
	else{
		printf("\n\tERRO ao abrir o arquivo!.\n");
	}
}*/

	char an[];
int main() {
	//setlocale(LC_ALL,"Portuguese");
	char opc;
	
	printf("\n\tBolco de Notas\n");
	printf("\n\tNome do arquivo: ");
	gets(an);
	printf("\n\tOp��es que o programa oferece: ");
	printf("\n\t\t\t\t\tescrever > w");
	printf("\n\t\t\t\t\tler > r");
	printf("\n\t\t\t\t\tadicionar > a\n\t\t\t> ");
	scanf("%c", &opc);
	
	switch (opc){
		case 'w':
			escrever(an);
		break;

		case 'r':
			ler(an);
		break;

		//case 'a':
		//	adicionar(an);
		//break;
	}
	return 0;
}