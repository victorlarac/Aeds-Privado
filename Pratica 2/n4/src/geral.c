#include "geral.h"

//Fila:
void FFVazia(Fila *f){
	f->first = (Block*) malloc (sizeof(Block));
	f->last  = f->first;
	f->first->prox = NULL;
}

void Enfileira(Fila *f, Item d){
	f->last->prox = (Block*) malloc (sizeof(Block));
	f->last = f->last->prox;
	f->last->data = d;
	f->last->prox = NULL;
}

void Desenfileira(Fila *f, Item *d){
	Block *aux;

	if(f->first == f->last || f == NULL || f->first->prox == NULL){
		printf("FILA VAZIA!\n");
		return;
	}
	
	aux = f->first;
	f->first = f->first->prox;
	d->val   = f->first->data.val;
	free(aux);
}


void FImprime(Fila *f){
	Block *aux;

	aux = f->first->prox;
	while(aux != NULL){
		printf("%d\n", aux->data.val);
		aux = aux->prox;
	}

}

//Lista:

void Swap(Block2 *a, Block2 *b){
	Item2 aux2;
	aux2 = a->data;
	a->data = b->data;
	b->data = aux2;
	
}

void FLVazia(Lista *l){
	l->first = (Block2*) malloc (sizeof(Block2));
	l->last  = l->first;
	l->first->prox = NULL;
}

void LInsert(Lista *l, Item2 d){
	l->last->prox = (Block2*) malloc (sizeof(Block2));
	l->last = l->last->prox;
	l->last->data = d;
	l->last->prox = NULL;
}

void LRemove(Lista *l, Item2 d){
	Block2 *aux2, *tmp;

	if(l->first == l->last || l == NULL || l->first->prox == NULL){
		printf("LISTA VAZIA!\n");
		return;
	}
	
	aux2 = l->first;
	while(aux2->prox != NULL){
		if (aux2->prox->data.val != d.val)
			aux2 = aux2->prox;
		else{
			tmp = aux2;
			aux2 = aux2->prox;
			tmp->prox = aux2->prox;
			free(aux2);
			aux2 = NULL;
		}
	}
}


void LImprime(Lista *l){
	Block2 *aux2;

	aux2 = l->first->prox;
	while(aux2 != NULL){
		printf("%s\n", aux2->data.val);
		aux2 = aux2->prox;
	}

}

//pilha:


void FPVazia(Pilha *p){
	p->base = (Block3*) malloc (sizeof(Block3));
	p->top  = p->base;
	p->base->prox = NULL;
}

void Push(Pilha *p, Item3 d){
	Block3 *aux = (Block3*) malloc (sizeof(Block3));
	aux->data = d;
	aux->prox = p->top;
	p->top = aux;
}

void Pop(Pilha *p, Item3 *d){
	Block3 *aux;

	if(p->base == p->top || p == NULL){
		printf("PILHA VAZIA!\n");
		return;
	}
	
	aux = p->top;
	p->top = aux->prox;
	*d = aux->data;
}


void PImprime(Pilha *p){
	Block3 *aux;

	aux = p->top;
	while(aux != p->base){
		printf("%s\n", aux->data.val);
		aux = aux->prox;
	}

}
