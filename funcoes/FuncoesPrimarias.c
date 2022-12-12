void menuPrincipal()
{
	int func = 0;
	system("cls");

	while(func < 1 || func > 4)
	{
		system("cls");	
		printf("***********************************\n");
		printf("* Gestao de referncias bibliograficas - MENU         *\n");
		printf("***********************************\n");
		printf("*  (1)-->Gerir referencias  \n");
		printf("*  (2)-->Mostrar estatistica       \n");
		printf("*  (3)-->Listar referencias       \n");
		printf("*  (4)-->Sair     \n");

		scanf("%d", &func);
		system("cls");

		switch(func) {
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
				exit(1);
				break;
				
			default:
                printf("\n\n\nEscolha apenas uma das opcoes\n");
                break;
			}
		}
}

void gerir()
{
	int inicial = 0;
	int func;
		
		system("cls");
		printf("***********************************\n");
		printf("* Gestao de referncias bibliograficas - MENU         *\n");
		printf("***********************************\n");
		printf("*  (1)-->Gerir referencias  *\n");
		printf("*  (2)-->Mostrar estatistica       *\n");
		printf("*  (3)-->Listar referencias       *\n");
		printf("*  (4)-->Sair     *\n");
		scanf("%d", &inicial);
		system("cls");


		switch(inicial){

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
			default:
                printf("\n\n\nEscolha apenas uma das opcoes\n");
                break;
			}
		}


void menugerir()
{
	int gerir = 0;
	char temp[20];

	system("cls");
	printf("***********************************\n");
	printf("*      Gerir Referencias         *\n");
	printf("***********************************\n");
	printf("*   (1) Inserir referencias              *\n");
	printf("*   (2) Mostrar referencias     *\n");
	printf("*   (3) Alterar referencias        *\n");
	printf("*   (4) Eliminar referncias          *\n");
	printf("*   (5) SAIR                      *\n");
	printf("***********************************\n");
	// scanf("%c", &temp);
	scanf("%d", &gerir);

	switch(gerir){
			case 1:
				inserir();
				break;
			case 2:
				mostrar();
				break;
			case 3:
				alterar();
				break;
			case 4:
				eliminar();
				break;	
			case 5:
				menuPrincipal();
				break;
			default:
                printf("\n\t\tEscolha apenas uma das opcoes\n");
                break;		

}
}

void menumostrar()
{
	int mostrar;
	system("cls");
	printf("***********************************\n");
	printf("*      Mostrar  Gestao de Referencias         *\n");
	printf("***********************************\n");
	printf("*   (1) Mostrar total de publicaçoes              *\n");
	printf("*   (2) Mostrar total autores     *\n");
	printf("*   (3) Mostrar total de palavras-chave        *\n");
	printf("*   (4) Mostrar total de paginas na base de dados          *\n");
	printf("*   (5) Mostrar media de paginas por publicaçao      *\n");
	printf("*   (6) SAIR                      *\n");
	printf("***********************************\n");
	scanf("%i", &mostrar);

	switch(mostrar){
			case 1:
				printf("%i", id);
				system("pause");
                break;
            case 2:
				printf("%i", idautores);
				system("pause");
                break;
            case 3:
				printf("%i", idpass);
				system("pause");
                break;
            case 4:
				printf("%i", idpaginas);
				system("pause");
                break;
            case 5:
				media = idpaginas / id;
				printf("%f", media);
				system("pause");
                break;
            case 6:
				menuPrincipal();
                break;
			default:
                printf("\n\n\nEscolha apenas uma das opcoes\n");
				system("pause");
                break;
		
	}
	menumostrar();
}

void menulistar()
{
	int listar;

	system("cls");
	printf("***********************************\n");
	printf("*       LISTAR Referencias         *\n");
	printf("***********************************\n");
	printf("*   (1) Listar autores              *\n");
	printf("*   (2) Listar publicacoes de um autor      *\n");
	printf("*   (3) Listar publicaçoes por tipo     *\n");
	printf("*   (4) Listar publicaçoes por palavras-chave        *\n");
	printf("*   (5) Listar publicaçoes por ano          *\n");
	printf("*   (6) Listar todas as palavras-passes      *\n");
    printf("*   (7) SAIR                      *\n");
	printf("***********************************\n");
	scanf("%i", &listar);

	switch(listar){
 			case 1:
				autores();
                break;
            case 2:
				pubautor();
                break;
            case 3:
				pubtipo();
                break;
            case 4:
				pubpass();
                break;
			case 5:
				pubano();
				break;
			case 6:
				allpass();
				break;
            case 7:
				menuPrincipal();
                break;
			default:
                printf("\n\n\nEscolha apenas uma das opcoes\n");
                break;
}
}