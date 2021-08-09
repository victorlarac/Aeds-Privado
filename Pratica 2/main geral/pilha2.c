#include "pilha2.h"

void FP2Vazia(Pilha2 *p){
	p->base = (Block*) malloc (sizeof(Block));
	p->top  = p->base;
	p->base->prox = NULL;
}

void Push2(Pilha2 *p, Item2 d){
	Block *aux = (Block*) malloc (sizeof(Block));
	aux->data = d;
	aux->prox = p->top;
	p->top = aux;
}

void Pop(Pilha2 *p, Item2 *d){
	Block *aux;

	if(p->base == p->top || p == NULL){
		printf("PILHA VAZIA!\n");
		return;
	}
	
	aux = p->top;
	p->top = aux->prox;
	*d = aux->data;
}


void P2Imprime(Pilha2 *p){
	Block *aux;

	aux = p->top;
	while(aux != p->base){
		printf("%d\n", aux->data.val);
		aux = aux->prox;
	}

}

void PTransfere(Pilha2 *p,Pilha2 *h){
	Block *aux;
	FP2Vazia(p);
	aux = p->top;
	h->top=h->top-1;
	while(aux != p->base || h->top != h->base){
		aux->data.val=h->top->data.val;
		Push2(p,aux->data);
		aux = aux->prox;
		h->top--;
	}
}
