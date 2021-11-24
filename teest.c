#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void escrever (char an[100]);
void ler (char an[100]);

void escrever(char an[100]){
	FILE *fp = fopen(an,"w");
	char in;
	if(fp){
		printf("\n\t Para finalizar digite ENTER.\n");
		scanf("%c", &in);
		while(in != '_'){ // shift + -
			fputc(in, fp);
			scanf("%c", &in);
		}
		fclose(fp);
	}
	else{
        printf("\n\tERRO ao abrir o arquivo!.\n");
	}
}

void ler(char an[100]){
	FILE *fp = fopen(an,"W+");
	char in;
	if(fp){
		printf("\n\t Para finalizar digite shift + - .\n");
		scanf("%c", &in);
		while(in != '_'){ // shift + -
			fputc(in, fp);
			scanf("%c", &in);
		}
		rewind(fp);

		while(!feof(fp)){
			in = fgetc(fp);
			printf("%c", in);
		}
		fclose(fp);

	}
	else{
        printf("\n\tERRO ao abrir o arquivo!.\n");
	}
}

int main(){
	char an[100];
	char opc;
	
	printf("\n\tBolco de Notas\n");
	printf("\n\tNome do arquivo: ");
	gets(an);
	printf("\n\tOpções que o programa oferece: ");
	printf("\n\t\t\tescrever > w");
	printf("\n\t\t\tler > r");
	printf("\n\t\t\tadicionar > a\n\t\t\t> ");
	scanf("%c", &opc);
	
	switch
	escrever(an);
	ler(an);

	return 0;
}