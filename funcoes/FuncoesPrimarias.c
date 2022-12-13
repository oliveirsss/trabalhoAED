void menuPrincipal()
{
	int func = 0;
	system("cls");

	while(func < 1 || func > 4)
	{
		system("cls");	
		printf("***********************************\n");
		printf("* Gestao de referncias bibliograficas - MENU *\n");
		printf("***********************************\n");
		printf("*  (1)-->Gerir referencias \n");
		printf("*  (2)-->Mostrar estatistica \n");
		printf("*  (3)-->Listar referencias  \n");
		printf("*  (4)-->Sair \n");
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

void menugerir()
{
	int gerir = 0;
	char temp[20];

	system("cls");
	printf("***********************************\n");
	printf("*      Gerir Referencias         *\n");
	printf("***********************************\n");
	printf("*   (1) Inserir referencias *\n");
	printf("*   (2) Mostrar referencias *\n");
	printf("*   (3) Alterar referencias *\n");
	printf("*   (4) Eliminar referncias *\n");
	printf("*   (5) Sair *\n");
	printf("***********************************\n");
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
	printf("*      Mostrar  Gestao de Referencias *\n");
	printf("***********************************\n");
	printf("*   (1) Mostrar o numero de publicacoes *\n");
	printf("*   (2) Mostrar o numero de autores *\n");
	printf("*   (3) Mostrar o numero de palavras-chave *\n");
	printf("*   (4) Mostrar o numero de paginas na base de dados *\n");
	printf("*   (5) Mostrar media de paginas por publicacao *\n");
	printf("*   (6) Sair *\n");
	printf("***********************************\n");
	scanf("%i", &mostrar);

	switch(mostrar){
			case 1:
				printf("Total de publicacoes: %i \n", id-1);
				system("pause");
				fflush(stdin);
				menumostrar();
                break;
            case 2:
				printf("Total de autores: %i \n", idautores);
				system("pause");
				fflush(stdin);
				menumostrar();
                break;
            case 3:
				printf("Total de palavras-chaves: %i \n", id-1);
				system("pause");
				fflush(stdin);
				menumostrar();
                break;
            case 4:
				printf("Total de paginas: %i \n", referencias[id].paginas++);
				system("pause");
				fflush(stdin);
				menumostrar();
                break;
            case 5:
				media = 0;
				for(int i=1; i<id; i++){

					media += referencias[i].paginas;
				}
				media = media / (id-1);
				printf("Media das paginas por publicacao: %f \n", media);
				system("pause");
				fflush(stdin);
				menumostrar();
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
	printf("*   (1) Listar autores *\n");
	printf("*   (2) Listar publicacoes de um autor *\n");
	printf("*   (3) Listar publicacoes por tipo *\n");
	printf("*   (4) Listar publicacoes por palavras-chave  *\n");
	printf("*   (5) Listar publicacoes por ano  *\n");
	printf("*   (6) Listar todas as palavras-passes  *\n");
    printf("*   (7) Sair *\n");
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