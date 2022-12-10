#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

#include "estrutura\structs.h"
#include "funcoes\FuncoesPrimarias.c"
#include "funcoes\FuncoesSecundarias.c"

void main(){
	int func = 0;

	while(func != 4){
		
		printf("***********************************\n");
		printf("* Gestao de referncias bibliograficas - MENU         *\n");
		printf("***********************************\n");
		printf("*  (1)-->Gerir referencias  *\n");
		printf("*  (2)-->Mostrar estatistica       *\n");
		printf("*  (3)-->Listar referencias       *\n");
		printf("*  (4)-->Sair     *\n");
		scanf("%d", &func);


		switch(func){

			case 1:
				menugerir();
				break;
			case 2:
				menumostrar();
				break;
			case 3:
				menulistar();
				break;
			case 4:
				break;
			
			}
		}
}

			