#include "pilhaenc.h"
#include <stdio.h>

int main (void) {
	
	TPilhaEnc pilha;
  int topo;

    criarPilha( &pilha );

	  empilhar( &pilha, 10 );
    empilhar( &pilha, 20 );
    empilhar( &pilha, 30 );
//mostra o subtopo da pilha
  //subtopo(pilha, topo);
//desempilha a pilha N vezes
  /*int n;
  scanf("%d", &n);
  desempilhar_n(pilha, n, topo);*/
//esvazia a pilha
  //esvaziar(pilha, topo);
//Descobre o valor da base
  descobrirBase(pilha);
	return 0;
}