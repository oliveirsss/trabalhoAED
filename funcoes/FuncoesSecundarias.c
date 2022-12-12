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
    idpass++;
    referencias[id].paginas++;

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
            printf("\n\t\t\t\tDigite o novo nome da publicacao: ");
            gets(referencias[referencia_id].nome);
            fflush(stdin);
            menugerir();
            break;
        case 2:
            system("cls");
            printf("\n\t\t\t\tDigite o novo tipo de publicacao: ");
            gets(referencias[referencia_id].pub);
            fflush(stdin);
            menugerir();
            break;
        case 3:
            system("cls");
            printf("\n\t\t\t\tDigite o novo nome do autor: ");
            gets(referencias[referencia_id].autor);
            fflush(stdin);
            menugerir();
            break;
        case 4:
            system("cls");
            printf("\n\t\t\t\tDigite o novo ano de lançamento da publicacao: ");
            scanf("%d", &referencias[referencia_id].ano);
            fflush(stdin);
            menugerir();
            break;
        case 5:
            system("cls");
            printf("\n\t\t\t\tDigite o novo local de lancamento da publicacao: ");
            gets(referencias[referencia_id].local);
            fflush(stdin);
            menugerir();
            break;
        case 6:
            system("cls");
            printf("\n\t\t\t\tDigite o novo numero de paginas da publicacao: ");
            scanf("%d", &referencias[referencia_id].paginas);
            fflush(stdin);
            menugerir();
            break;
        case 7:
            system("cls");
            printf("\n\t\t\t\tDigite o novo URL da publicacao: ");
            gets(referencias[referencia_id].endereco);
            fflush(stdin);
            menugerir();
            break;
        case 8:
            system("cls");
            printf("\n\t\t\t\tDigite a nova Palavra-chave da publicacao: ");
            gets(referencias[referencia_id].pass);
            fflush(stdin);
            menugerir();
            break;
        case 9:
            system("cls");
            printf("\n\t\t\t\tDigite o novo nome da publicacao: ");
            gets(referencias[referencia_id].nome);
            fflush(stdin);

            printf("\n\t\t\t\tDigite o novo tipo de publicacao: ");
            gets(referencias[referencia_id].pub);
            fflush(stdin);

            printf("\n\t\t\t\tDigite o novo nome do autor da publicacao: ");
            gets(referencias[referencia_id].autor);
            fflush(stdin);

            printf("\n\t\t\t\tDigite o novo ano de lancamento da publicacao: ");
            scanf("%d", &referencias[referencia_id].ano);
            fflush(stdin);

            printf("\n\t\t\t\tDigite o novo local de lancamento da publicacao: ");
            gets(referencias[referencia_id].local);
            fflush(stdin);

            printf("\n\t\t\t\tDigite o novo numero de paginas da publicacao: ");
            scanf("%d", &referencias[referencia_id].paginas);
            fflush(stdin);

            printf("\n\t\t\t\tDigite o novo URL da publicacao: ");
            gets(referencias[referencia_id].endereco);
            fflush(stdin);

            printf("\n\t\t\t\tDigite a nova Palavra-chave da publicacao: ");
            gets(referencias[referencia_id].pass);
            fflush(stdin);
            menugerir();
            break;
        default:
            printf("\n\t\t\t\tDigite apenas uma das opcoes!");
            menugerir();
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
        printf("\t\t %s \n", referencias[i].autor);
    }
    system("pause");
    menulistar();
}

void pubautor()
{
    char nome_autor_procurar[32]="";

    printf("Digite o nome do autor do autor de pretende procurar: ");
    scanf("\t\t %s \n", nome_autor_procurar);
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
    scanf("\t\t %s \n", publicacoes_tipo);
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
    char publicacoes_pass[32]="";

    printf("Digite a palavra-chave da publicacao que pretende procurar: ");
    scanf("\t\t %s \n", publicacoes_pass);
    fflush(stdin);

    for (int i = 1; i < id; i++)
    {
        int comparador;

        comparador = strcmp(referencias[i].pass, publicacoes_pass);

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

void pubano()
{

    int publicacoes_ano;

    printf("Digite o ano da publicacao que pretende procurar: ");
    scanf("\t\t %i \n", referencias[id].ano);
    fflush(stdin);

    for (int i = 1; i < id; i++)
    {
        if(referencias[i].ano == publicacoes_ano){

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

void allpass()
{
    for (int i = 1; i < id; i++)
    {
        printf("\t\t %s \n", referencias[i].pass);
    }
    system("pause");
    menulistar();
}