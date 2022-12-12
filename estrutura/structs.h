#define max_referencias 500

int id = 1; //id das referencias
int ref_id = 1;
int idautores = 1;
int idpass = 1;
int idpaginas = 0;
float media;

typedef struct publicacoes
{	
	char nome[255];
	char pub[255];
	int idautor;
	char autor[255];
	int ano;
	char local[255];
	int paginas;
	char endereco[255];
	char pass[255];
	int inicial;
	int gerir;
	int mostrar;
	int listar;

}Referencias;

Referencias referencias[500];

typedef struct autores
{
	int id;
	char autor[255];
}Autores;

Autores autor[50];

typedef struct todaspass
{
	int idpass;
	char pass[255];
}Todaspass;

Todaspass pass[50];
