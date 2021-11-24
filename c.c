#include <stdio.h> // FILE
#include <stdlib.h>
//#include <conio.h>
#include <string.h>

int main(){
	
	/*FILE *prt;
	prt=fopen("arquivo.txt","a");
	fclose(prt);
	printf("arquivo criado com sucesso.");
	system("pause");
	return (0);*/
	
	FILE *fp; //ponteiro
	char in, an[35];
	
	printf("\n\tBolco de Notas\n");
	printf("\n\tNome do arquivo: ");
	gets(an);
    fp= fopen(an,"w");
	/*printf("\n\tOpções que o programa oferece: ");
	printf("\n\t\t\tescrever > w");
	printf("\n\t\t\tler > r");
	printf("\n\t\t\tadicionar > a\n\t\t\t> ");
	scanf("%c", &opc);*/

    if(fp){
        printf("\n\t Para finalizar digite ENTER.\n");
        scanf("%c", &in);
        while((in = getchar())!= EOF){
            fputc(in, fp);
            scanf("%c", &in);
        }
        fclose(fp);
    }
    else{
        printf("\n\tERRO ao abrir o arquivo!.\n");
    }
    
	
	/*if(opc == 'w'){
		fp = fopen(an,"w");
		printf("\n\t\t\tESCREVA\n");
		printf("\n\t\t\tPara salvar pressione crtl+z\n");
		while((in = getchar())!= EOF){
			putc(in, fp);
		}
		fclose(fp);
	}
	if (opc == 'r'){
		fp = fopen(an,"r"); // poteiro
		printf("\n\t\t\tLEIA\n");
		while((in = getc(fp))!= EOF){
			printf("%c",in);
		}
		fclose(fp);
	}
	else if(opc == 'a'){
		fp = fopen(an,"a");
		printf("\n\t\t\tADICIONAR\n");
		printf("\n\t\t\tPara salvar pressione crtl+z\n");
		while((in = getchar())!= EOF){
			putc(in, fp);
		}
		fclose(fp);
	}*/
	getch();
	return 0;
}