void inserir()
{
    system("cls");

    printf("***********************************\n");
    printf("* Gestao de referncias bibliograficas - Inserir         *\n");
    printf("***********************************\n");

    fflush(stdin);
    printf("*    Insira nome da publicaçao:   *\n");
    gets(referencias[id].nome);
    fflush(stdin);

    printf("*    Insira o tipo de publicaçao:     *\n");
    gets(referencias[id].pub);
    fflush(stdin);

    printf("*    Insira o autor:       *\n");
    gets(referencias[id].autor);
    fflush(stdin);
    int existe = 0;
    referencias[id].idautor = idautores;
    
    for (size_t i = 0; i <= id; i++)
    {
        if (strcmp(referencias[i].autor, referencias[id].autor) == 0)
            existe = 1;
    }

    if (existe == 0){
        strcpy(autor[idautores].autor, referencias[id].autor);
        autor[idautores].id = idautores;
        idautores++;
    }

    printf("*    Insira o ano da publicaçao:       *\n");
    scanf("%i", &referencias[id].ano);
    fflush(stdin);

    printf("*    Insira o local da publicaçao:            *\n");
    gets(referencias[id].local);
    fflush(stdin);

    printf("*    Insira o numero de paginas:          *\n");
    scanf("%i", &referencias[id].paginas);
    fflush(stdin);

    printf("*    Insira o endereço:                *\n");
    gets(referencias[id].endereco);
    fflush(stdin);

    printf("*    Insira as palavras-chaves:                     *\n");
    gets(referencias[id].pass);
    fflush(stdin);

    id++;
    idautores++;
    idpass++;
    idpaginas++;

    menugerir();
}

void mostrar()
{
    int sair;
    int i;

	system("cls");
    for (i = 1; i < id; i++)
    {
        printf("Nome da publicacao: %s \n", referencias[i].nome);
        printf("Tipo de publicacao: %s \n", referencias[i].pub);
        printf("Nome do autor: %s \n", referencias[i].autor);
        printf("Ano da publicaco: %i \n", referencias[i].ano);
        printf("Local da publicacao: %s \n", referencias[i].local);
        printf("Numero de paginas: %i \n", referencias[i].paginas);
        printf("Endereco da publicacao: %s \n", referencias[i].endereco);
        printf("Palavra-chave: %s \n", referencias[i].pass);
    }

    printf("\n\n\n\t\t\t\tPressione (5) para voltar: ");
    scanf("%i", &sair);

    if (sair == 5)
    {
        menugerir();
    }
}

void alterar()
{
    int alteracao;
    int cont;
    int referencia_id;

	system("cls");
    printf("\n\t\t\t\tDigite o ID da referencia que pretende alterar: ");
    scanf("%i", &referencia_id);
    fflush(stdin);

    printf("\n\t\t\t\tO que pretende alterar?");
    printf("\n\t\t\t\t(1) Nome da publicacao");
    printf("\n\t\t\t\t(2) Tipo de publicacao");
    printf("\n\t\t\t\t(3) Nome do autor");
    printf("\n\t\t\t\t(4) Ano de lancamento");
    printf("\n\t\t\t\t(5) Local de lancamento");
    printf("\n\t\t\t\t(6) Numero de paginas");
    printf("\n\t\t\t\t(7) URL da publicacao");
    printf("\n\t\t\t\t(8) Palavras-chave");
    printf("\n\t\t\t\t(9) Referencia completa");
    printf("\n\t\t\t\tEscolha uma das opcoes: ");
    scanf("%i", &alteracao);
    fflush(stdin);

    switch (alteracao)
    {
        case 1:
            system("cls");
            printf("\n\t\t\t\tDigite o novo nome da publicacao %d: ", referencias[referencia_id].nome);
            gets(referencias[referencia_id].nome);
            fflush(stdin);
            menugerir();
            break;
        case 2:
            system("cls");
            printf("\n\t\t\t\tDigite o novo tipo de publicacao %d: ", referencias[referencia_id].pub);
            gets(referencias[referencia_id].pub);
            fflush(stdin);
            menugerir();
            break;
        case 3:
            system("cls");
            printf("\n\t\t\t\tDigite o novo nome do autor %d: ", referencias[referencia_id].autor);
            gets(referencias[referencia_id].autor);
            fflush(stdin);
            menugerir();
            break;
        case 4:
            system("cls");
            printf("\n\t\t\t\tDigite o novo ano de lançamento da publicacao %d: ", referencias[referencia_id].ano);
            scanf("%d", &referencias[referencia_id].ano);
            fflush(stdin);
            menugerir();
            break;
        case 5:
            system("cls");
            printf("\n\t\t\t\tDigite o novo local de lancamento da publicacao %d: ", referencias[referencia_id].local);
            gets(referencias[referencia_id].local);
            fflush(stdin);
            menugerir();
            break;
        case 6:
            system("cls");
            printf("\n\t\t\t\tDigite o novo numero de paginas da publicacao %d: ", referencias[referencia_id].paginas);
            scanf("%d", &referencias[referencia_id].paginas);
            fflush(stdin);
            menugerir();
            break;
        case 7:
            system("cls");
            printf("\t\t\t\tDigite o novo URL onde a publicacao %d se encontra: ", referencias[referencia_id].endereco);
            gets(referencias[referencia_id].endereco);
            fflush(stdin);
            menugerir();
            break;
        case 8:
            system("cls");
            printf("\t\t\t\tQuatas palavras-chave quer adicionar? ");
            scanf("%d", &cont);
            fflush(stdin);
            menugerir();

            if (cont <= 0)
            {
                menugerir();
            }
            else
            {

                for (int i = 0; i < cont; i++)
                {
                    printf("\t\t\t\tDigite a nova %d Palavra-chave: ", i + 1);
                    gets(referencias[referencia_id].pass);
                    fflush(stdin);
            menugerir();
                }
            }
            break;
        case 9:
            system("cls");
            printf("\n\t\t\t\tDigite o novo nome da publicacao %d: ", ref_id);
            gets(referencias[referencia_id].nome);
            fflush(stdin);

            printf("\n\t\t\t\tDigite o novo tipo de publicacao %d: ", ref_id);
            gets(referencias[referencia_id].pub);
            fflush(stdin);

            printf("\n\t\t\t\tDigite o novo nome do autor da publicacao %d: ", ref_id);
            gets(referencias[referencia_id].autor);
            fflush(stdin);

            printf("\n\t\t\t\tDigite o novo ano de lancamento da publicacao  %d: ", ref_id);
            scanf("%d", &referencias[referencia_id].ano);
            fflush(stdin);

            printf("\n\t\t\t\tDigite o novo local de lancamento da publicacao %d: ", ref_id);
            gets(referencias[referencia_id].local);
            fflush(stdin);

            printf("\n\t\t\t\tDigite o novo numero de paginas da publicacao %d: ", ref_id);
            scanf("%d", &referencias[referencia_id].paginas);
            fflush(stdin);

            printf("\t\t\t\tDigite o novo URL onde a publicacao %d se encontra: ", ref_id);
            gets(referencias[referencia_id].endereco);
            fflush(stdin);

            printf("\t\t\t\tQuantas palavras-chve quer adicionar? ");
            scanf("%d", &cont);
            fflush(stdin);

            if (cont <= 0)
            {
                menugerir();
            }
            else
            {

                for (int i = 0; i < cont; i++)
                {
                    printf("\n\t\t\t\tDigite a %d palavra-chave: ", i + 1);
                    gets(referencias[i].pass);
                    fflush(stdin);
                }
            }
            break;
        default:
            printf("\n\t\t\t\tDigite uma das opcoes!");
            break;
    }
}

void eliminar()
{
    int referencias[id];

    system("cls");
    printf("\n\n\n\t\t\t\tDigite o ID da referencia que quer eliminar: ");
    scanf("%i", &referencias[id]);
    fflush(stdin);

    for (int i = ref_id; i < id - 1; i++)
    {

        referencias[i] = referencias[i + 1];
    }
    id--;
    menugerir();
}

void autores()
{
    for (int i = 1; i < id; i++)
    {
        printf("%i", referencias[i].autor);
    }
    system("pause");
    menulistar();
}

void pubautor()
{
    char nome_autor_procurar[32]="";

    printf("Digite o nome do autor do autor de pretende procurar: ");
    scanf("%s", nome_autor_procurar);
    fflush(stdin);

    for (int i = 1; i < id; i++)
    {
        int comparador;

        comparador = strcmp(referencias[i].autor, nome_autor_procurar);

        if(comparador == 0){

        printf("Nome da publicacao: %s \n", referencias[i].nome);
        printf("Tipo de publicacao: %s \n", referencias[i].pub);
        printf("Nome do autor: %s \n", referencias[i].autor);
        printf("Ano da publicaco: %i \n", referencias[i].ano);
        printf("Local da publicacao: %s \n", referencias[i].local);
        printf("Numero de paginas: %i \n", referencias[i].paginas);
        printf("Endereco da publicacao: %s \n", referencias[i].endereco);
        printf("Palavra-chave: %s \n", referencias[i].pass);
        }
    }
    system("pause");
    menulistar();
}

void pubtipo()
{
    char publicacoes_tipo[32]="";

    printf("Digite o tipo de publicacao que pretende procurar: ");
    scanf("%s", publicacoes_tipo);
    fflush(stdin);

    for (int i = 1; i < id; i++)
    {
        int comparador;

        comparador = strcmp(referencias[i].pub, publicacoes_tipo);

        if(comparador == 0){

        printf("Nome da publicacao: %s \n", referencias[i].nome);
        printf("Tipo de publicacao: %s \n", referencias[i].pub);
        printf("Nome do autor: %s \n", referencias[i].autor);
        printf("Ano da publicaco: %i \n", referencias[i].ano);
        printf("Local da publicacao: %s \n", referencias[i].local);
        printf("Numero de paginas: %i \n", referencias[i].paginas);
        printf("Endereco da publicacao: %s \n", referencias[i].endereco);
        printf("Palavra-chave: %s \n", referencias[i].pass);
        }
    }
    system("pause");
    menulistar();
}

void pubpass()
{
    for (int i = 1; i < referencias[i].pass; i++)
    {
        printf("%i", referencias[i].pass);
    }
    system("pause");
    menulistar();
}

void pubano()
{
    for (int i = 1; i < referencias[i].ano; i++)
    {
        printf("%i", referencias[i].ano);
    }
    system("pause");
    menulistar();
}

void allpass()
{
    for (int i = 1; i < referencias[i].pass; i++)
    {
        printf("%s", referencias[i].pass);
    }
    system("pause");
    menulistar();
}