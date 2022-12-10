#define ref_id 20



int id = 1; //id das referencias
int idautores = 1;
int idpass = 1;
int idpaginas = 1;
float media;

typedef struct publicacoes
{	
	char nome;
	char pub;
	char autor;
	int ano;
	char local;
	int paginas;
	char endereco;
	char pass;
	int inicial;
	int gerir;
	int mostrar;
	int listar;

}Referencias;

Referencias ref[ref_id];

typedef struct autores
{
	int id;
	int autores;
}Autores;
