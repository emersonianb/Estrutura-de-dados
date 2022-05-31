// número máximo de nós na fila
#define MAX 5

//*************** Implementação da área de dados do TAD **************//

// Definição da estrutura Fila Seq. Circular

typedef struct filacircular {
	int elementos[ MAX ]; // vetor que vai armazenar os elementos
	int frente; // variável usada para controlar o início da fila
    int final; // variável usada para controlar o final da fila
    int tam;  // número de elementos na fila
}TFilaSeqCirc;


//************ A interface de uso do TAD Fila Seq. Circular **********//

/* Criar uma fila sequencial circular vazia */
void criarFila( TFilaSeqCirc* fila );

/* Verificar se a fila circular está vazia */
int filaVazia( TFilaSeqCirc* fila );

/* Verificar se a fila circular está cheia */
int filaCheia( TFilaSeqCirc* fila );

/* Consultar o elemento que está na frente da fila circular */
int elementoFrente( TFilaSeqCirc* fila, int* valor );

/* Inserir (enfileirar) um elemento na fila circular */
int enfileira( TFilaSeqCirc* fila, int elemento );

/* Retirar (desenfileirar) um elemento da fila circular */
int desenfileira ( TFilaSeqCirc* fila, int* valor );

/* Imprimir o conteúdo da fila circular */
void imprimir( TFilaSeqCirc* fila );

/*Combina o conteúdo das filas*/
void combina_filas(TFilaSeqCirc f_res, TFilaSeqCirc f1, TFilaSeqCirc f2);