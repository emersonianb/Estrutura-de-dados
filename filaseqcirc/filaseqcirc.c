#include "filaseqcirc.h"
#include <stdio.h>
#include <string.h>

//*************** Implementação do TAD Fila Seq. Circular ***********//


/* Criar uma fila sequencial circular vazia
 * Parâmetros: a fila (uma struct) passada por referência
 */
void criarFila( TFilaSeqCirc* fila ) {
	fila->frente = 0; 
	fila->final  = -1; // condição de fila vazia
	fila->tam    = 0;  // condição de fila vazia
}

/* Verificar se a fila está (ou não) vazia
 * Parâmetros: a fila (uma struct) passada por referência
 */
int filaVazia( TFilaSeqCirc* fila ){ return fila->tam == 0; }

/* Verificar se a fila está (ou não) cheia
 * Parâmetros: a fila (uma struct) passada por referência
 */
int filaCheia( TFilaSeqCirc* fila ){ return fila->tam == MAX; }

/* Consultar o elemento que se encontra na frente da fila
 * Parâmetros: a fila passada por referência e um 
 * ponteiro "de retorno" que guardará o "elemento-frente" consultado
 */
int elementoFrente( TFilaSeqCirc* fila, int *valor ){
	// se fila está vazia 
	if ( filaVazia( fila ) ) return 0;
	*valor = fila->elementos[ (fila->frente) ];
	return 1;
}

/* Enfileirar um elemento na fila 
 * Parâmetros: a fila passada por referência e um elemento qualquer
 */
int enfileira( TFilaSeqCirc* fila, int elemento ){
	// se fila está cheia
	if ( filaCheia( fila ) ) return 0;
	
	(fila->tam)++;
	fila->final = (fila->final + 1) % MAX;
    fila->elementos[ fila->final ] = elemento;
	return 1;
}

/* Retirar (desenfileirar) um elemento da fila 
 * Parâmetros: a fila passada por referência e um 
 * ponteiro "de retorno" que guardará o elemento retirado
 */
int desenfileira ( TFilaSeqCirc* fila, int* valor ) {
   	if ( !elementoFrente( fila, valor ) ) return 0;

	(fila->tam)--;
	fila->frente = (fila->frente + 1) % MAX;
    return 1;
}

/* Imprimir o contéudo da fila sequencial circular
 * Parâmetros: a fila (uma struct) passada por referência
 */
void imprimir( TFilaSeqCirc* fila) {
    printf("\nFila=[ ");

	// varrendo todos os elementos
	for ( int i = 1, aux = fila->frente;
	                  i <= fila->tam; i++, aux = (aux + 1) % MAX )
		printf( "%d ", fila->elementos[ aux ] );

    printf( "]" );
}

void combina_filas(TFilaSeqCirc f_res, TFilaSeqCirc f1, TFilaSeqCirc f2){
  while (1){
    int retorno1 = 0;
    int retorno2 = 0;
    if (!filaVazia(&f1) && !filaVazia(&f2)){
      desenfileira(&f1, &retorno1);
      enfileira(&f_res, retorno1);
      desenfileira(&f2, &retorno2);
      enfileira(&f_res, retorno2);
    }
    else if (!filaVazia(&f1)){
      desenfileira(&f1, &retorno1);
      enfileira(&f_res, retorno1);
    }
    else if (!filaVazia(&f2)){
      desenfileira(&f2, &retorno2);
      enfileira(&f_res, retorno2);
    }
    else{
      break;
    }
  imprimir(&f_res);
  }
  /*
  int tam;
  if (len(f1) > len(f2)){
    tam = len(f1);
  }
  else{
    tam = len(f2);
  }
  for (int i = tam; i < tam+1; i +=1 ){
    int retorno1 = 0;
    if (!filaVazia(&f1)){
      desenfileira(&f1, &retorno1);
      enfileira(&f_res, retorno1);
    }
    int retorno2 = 0;
    if (!filaVazia(&f2)){
      desenfileira(&f2, &retorno2);
      enfileira(&f_res, retorno2);
    }
    */
  }