#include "lista1.h"



void FL1Vazia(Lista1 *l){
	l->first = 0;
	l->last  = 0;
}

void LInsert1(Lista1 *l, Item d){
	if (l->last >= MAXTAM){
		printf("LISTA 1 CHEIA!\n");
	}else{
		l->vet[l->last] = d;
		l->last ++;
	}
}

void LImprime(Lista1 *l){
	for(int i=l->first; i<l->last; i++)
		printf("%d\t", l->vet[i].val);
	printf("\n");
}


void FLVazia2(Lista2 *li){
	li->first = 0;
	li->last = 0;
}

void LInsert2(Lista2 *li, Item d){
	if (li->last >= MAXTAM){
		printf("LISTA 2 CHEIA!\n");
	}else{
		li->vetor[li->last] = d;
		li->last ++;
	}
}

void LImprime2(Lista2 *li){
	for(int i=li->first; i<li->last; i++)
		printf("%d\t", li->vetor[i].val);
	printf("\n");
}


void Concatenuacao(Lista3 *list,Lista1 l,Lista2 *li){
	list->first=0;
	list->last=0;
	int j=0;
	int aux1=0;
	for(int i=0;i<MAXTAM*2;i++){
		if(i%2==0){
	  		list->vetor[i] = l.vet[j];
			j++;
		}else{
			list->vetor[i]=li->vetor[aux1];
			aux1++;
		}
	}
	printf("\n");
		for(int i=0;i<MAXTAM*2;i++){
			printf("{%d}",list->vetor[i].val);
			if(i%2)
				printf("\t");
		}
	printf("\n");
	printf("\n");
}

	

/*void LInsert(Item v,Item e){
	int aux;
	Lista1 l;
	aux = 10 ;
	if(aux%2==0){
		v.val=aux;
		LInsert1(&l, v);
	}else{
		e.val=aux;
	}	
}*/
