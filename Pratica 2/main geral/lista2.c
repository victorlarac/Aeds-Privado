#include "lista2.h"



void FL2Vazia(Lista21 *l){
	l->first = 0;
	l->last  = 0;
}

void L2Insert1(Lista21 *l, Item2 d){
	if (l->last >= MAXTAM2){
		printf("LISTA 1 CHEIA!\n");
	}else{
		l->vet[l->last] = d;
		l->last ++;
	}
}

void L2Imprime(Lista21 *l){
	for(int i=l->first; i<l->last; i++)
		printf("%d\t", l->vet[i].val);
	printf("\n");
}


void FL2Vazia2(Lista22 *li){
	li->first = 0;
	li->last = 0;
}

void L2Insert2(Lista22 *li, Item2 d){
	if (li->last >= MAXTAM2){
		printf("LISTA 2 CHEIA!\n");
	}else{
		li->vetor[li->last] = d;
		li->last ++;
	}
}

void L2Imprime2(Lista22 *li){
	for(int i=li->first; i<li->last; i++)
		printf("%d\t", li->vetor[i].val);
	printf("\n");
}


void Concat(Lista23 *list,Lista21 *l,Lista22 *li){
	list->first=0;
	list->last=0;
    int j=0;
	int aux1=0;
	for(int i=0;i<MAXTAM2*2;i++){
		if(i%2==0){
	  		list->vetor[i] = l->vet[j];
			j++;
		}else{
			list->vetor[i]=li->vetor[aux1];
			aux1++;
		}
	}
	printf("\n");
		for(int i=0;i<MAXTAM2*2;i++)
			printf("%d\t",list->vetor[i].val);
}
void play(Lista23 *list,Lista21 *l,Lista22 *li){
    int valor;
    int aux=0;
    int aux1=0;
    valor = rand()%13+1;
    printf("\n\nVALOR ALEATORIO GERADO\n\t");
    printf("%d\n\n",valor);
    for(int i=0;i<MAXTAM2*2;i++){
        list->vetor[i].val-=valor;
        printf("%d\t",list->vetor[i].val);
        if(i%2==0){
            aux+=list->vetor[i].val;
        }else{
            aux1+=list->vetor[i].val; 
		}
    }

	if(aux>aux1){
		printf("\n\nLista 1 ganhou o jogo\t\n\n");
		printf("Elementos:");
		for(int i=0;i<MAXTAM2;i++)
			printf("%d\t",l->vet[i].val-valor);
	}else if(aux<aux1){
		printf("\n\nLista 2 ganhou o jogo\t\n\n");
		printf("Elementos:");
		for(int i=0;i<MAXTAM2;i++)
			printf("%d\t",li->vetor[i].val-valor);
	}else{
		printf("\n\nAmbas as listas ganharam o jogo \t\n\n");
		printf("Elementos Lista 1:");
		for(int i=0;i<MAXTAM2;i++)
			printf("%d\t",l->vet[i].val-valor);
			printf("Elementos Lista 2:");
		for(int i=0;i<MAXTAM2;i++)
			printf("%d\t",li->vetor[i].val-valor);
	}
}


	

