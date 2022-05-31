#include "filaseqcirc.h"
#include <stdio.h>

int main (void) {
  //definir as 3 filas
	TFilaSeqCirc f1;
  TFilaSeqCirc f2;
  TFilaSeqCirc f_res;
	
	// chamada da funão responsave pela criação da fila 1
	criarFila( &f1 );
    
    // construir a fila 1
	for( int i = 10; i < 60; i += 10 )
		enfileira( &f1, i ); 
    int retorno = 0;
  printf("Fila 1:");
	elementoFrente( &f1, &retorno ) ;
    printf( "\nElemento Frente: %d", retorno );
    imprimir( &f1 );
  
  // chamada da funão responsave pela criação da fila 2
	criarFila( &f2 );
  
  // construir a fila 1
  printf("\n");
  for( int i = 40; i < 70; i += 10 )
  		enfileira( &f2, i ); 
      int retorno2 = 0;
  printf("\n\nFila 2:");  
  elementoFrente( &f2, &retorno2 ) ;
    printf( "\nElemento Frente: %d", retorno2 );
    imprimir( &f2 );  
  
  // chamada da funão responsave pela criação da fila resutante
  criarFila( &f_res );
    if( filaVazia( &f_res ) ) printf( "\n\nLista resultante vazia\n");
  
  // chamada da função que combina as filas no main
  combina_filas(f_res, f1, f2);
/*
	//retirar os elementos: 10, 20 e 30
	for( int i = 0; i < 3; i++ ){
		desenfileira( &f1, &retorno ); 
    	printf( "\nElemento removido: %d", retorno );
		elementoFrente( &f1, &retorno ) ;
    	printf( "\nElemento Frente: %d", retorno );
	}
  
    enfileira( &fila, 50 );
    imprimir( &fila );
   
    enfileira( &fila, 60 ); // uma inserção no modo "circular"
	elementoFrente( &fila, &retorno ) ;
	printf( "\nElemento Frente: %d", retorno );
	imprimir( &fila );
    
    enfileira( &fila, 70 ); // outra inserção no modo "circular"
	elementoFrente( &fila, &retorno ) ;
    printf( "\nElemento Frente: %d", retorno ); 
    imprimir( &fila );
    
    // imprimir o real estado do vetor
    // isso revelará a real posição de cada elemento no vetor
    printf( "\nVETOR:[" );
    for( int i = 0; i < MAX; i++ )
    	printf( "%d ", fila.elementos[ i ] );
    printf( "]\n" );
    */
	return 0;
}