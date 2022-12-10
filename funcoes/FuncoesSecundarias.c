void inserir()
{
    system("cls");

    printf("***********************************\n");
    printf("* Gestao de referncias bibliograficas - Inserir         *\n");
    printf("***********************************\n");

    fflush(stdin);
    printf("*    Insira nome da publicaçao:   *\n");
    gets(ref[id].nome);
    fflush(stdin);

    printf("*    Insira o tipo de publicaçao:     *\n");
    gets(ref[id].pub);
    fflush(stdin);

    printf("*    Insira o autor:       *\n");
    gets(ref[id].autor);
    fflush(stdin);
    int existe = 0;

    for (size_t i = 0; i <= id; i++)
    {
        if (strcmp(ref[i].autor, ref[id].autor) == 0)
            existe = 1;
    }

    if (existe == 0)
        id_autores++;

    printf("*    Insira o ano da publicaçao:       *\n");
    scanf("%i", &ref[id].ano);
    fflush(stdin);

    printf("*    Insira o local da publicaçao:            *\n");
    gets(ref[id].local);
    fflush(stdin);

    printf("*    Insira o numero de paginas:          *\n");
    scanf("%i", &ref[id].paginas);
    fflush(stdin);

    printf("*    Insira o endereço:                *\n");
    gets(ref[id].endereco);
    fflush(stdin);

    printf("*    Insira as palavras-chaves:                     *\n");
    gets(ref[id].pass);
    fflush(stdin);

    id++;
    idautores++;
    idpass++;
    idpaginas++;
}

void mostrar()
{
    int sair;

    for (i = 0, i < id, i++)
    {
        printf("Nome da publicacao: %s \n", &ref[id].nome);
        printf("Tipo de publicacao: %s \n", &ref[id].pub);
        printf("Nome do autor: %s \n", &ref[id].autor);
        printf("Ano da publicaco: %i \n", &ref[id].ano);
        printf("Local da publicacao: %s \n", &ref[id].local);
        printf("Numero de paginas: %i \n", &ref[id].paginas);
        printf("Endereco da publicacao: %s \n", &ref[id].endereco);
        printf("Palavra-chave: %s \n", &ref[id].pass);
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
    int ref_id, alteracao, cont;

    printf("\n\t\t\t\tDigite o ID da referencia que pretende alterar: ");
    scanf("%i", &ref[id]);
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
    scanf("%i", &alteracao);
    fflush(stdin);

    switch (alteracao)
    {
    case 1:
        system("cls");
        printf("\n\t\t\t\tDigite o novo nome da publicacao %d: ", ref_id);
        gets(referencia[ref_id].nome);
        fflush(stdin);
        break;
    case 2:
        system("cls");
        printf("\n\t\t\t\tDigite o novo tipo de publicacao %d: ", ref_id);
        gets(referencia[ref_id].pub);
        fflush(stdin);
        break;
    case 3:
        system("cls");
        printf("\n\t\t\t\tDigite o novo nome do autor %d: ", ref_id);
        gets(referencia[ref_id].autor);
        fflush(stdin);
        break;
    case 4:
        system("cls");
        printf("\n\t\t\t\tDigite o novo ano de lançamento da publicacao %d: ", ref_id);
        scanf("%d", &referencia[ref_id].ano);
        fflush(stdin);
        break;
    case 5:
        system("cls");
        printf("\n\t\t\t\tDigite o novo local de lancamento da publicacao %d: ", ref_id);
        gets(referencia[ref_id].local);
        fflush(stdin);
        break;
    case 6:
        system("cls");
        printf("\n\t\t\t\tDigite o novo numero de paginas da publicacao %d: ", ref_id);
        scanf("%d", &referencia[ref_id].paginas);
        fflush(stdin);
        break;
    case 7:
        system("cls");
        printf("\t\t\t\tDigite o novo URL onde a publicacao %d se encontra: ", ref_id);
        gets(referencia[ref_id].endereco);
        fflush(stdin);
        break;
    case 8:
        system("cls");
        printf("\t\t\t\tQuatas palavras-chave quer adicionar? ");
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
                printf("\t\t\t\tDigite a nova %d Palavra-chave: ", i + 1);
                gets(referencia[ref_id].pass);
                fflush(stdin);
            }
        }
        break;
    case 9:
        system("cls");
        printf("\n\t\t\t\tDigite o novo nome da publicacao %d: ", ref_id);
        gets(referencia[ref_id].nome);
        fflush(stdin);

        printf("\n\t\t\t\tDigite o novo tipo de publicacao %d: ", ref_id);
        gets(referencia[ref_id].pub);
        fflush(stdin);

        printf("\n\t\t\t\tDigite o novo nome do autor da publicacao %d: ", ref_id);
        gets(referencia[ref_id].autor);
        fflush(stdin);

        printf("\n\t\t\t\tDigite o novo ano de lancamento da publicacao  %d: ", ref_id);
        scanf("%d", &referencia[ref_id].ano);
        fflush(stdin);

        printf("\n\t\t\t\tDigite o novo local de lancamento da publicacao %d: ", ref_id);
        gets(referencia[ref_id].local);
        fflush(stdin);

        printf("\n\t\t\t\tDigite o novo numero de paginas da publicacao %d: ", ref_id);
        scanf("%d", &referencia[ref_id].paginas);
        fflush(stdin);

        printf("\t\t\t\tDigite o novo URL onde a publicacao %d se encontra: ", ref_id);
        gets(referencia[ref_id].endereco);
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
                gets(referencia[ref_id].pass);
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
    int ref_id;

    system("cls");
    printf("\n\n\n\t\t\t\tDigite o ID da referencia que quer eliminar: ");
    scanf("%i", &ref_id);
    fflush(stdin);

    for (int i = ref_id; i < id - 1; i++)
    {

        referencia[i] = referencia[i + 1];
    }
    id--;
}

void autores()
{
    for (int i = 1; i <= idautores; i++)
    {

        printf("%i", autores)
    }
}