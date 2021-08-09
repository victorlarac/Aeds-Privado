#include "pilha3.h"


void FP3Vazia(Pilha3 *p){
	p->top   = 0;
	p->base  = 0;
}


void PUSH3(Pilha3 *p, Item3 d){
	if (p->top >= MAXTAM3){
		printf("PILHA CHEIA!\n");
	}else{
		p->vet[p->top] = d;
		p->top ++;
	}
}




void P3Imprime(Pilha3 *p){
	for(int i=p->top-1; i>=p->base; i--)
		printf("%d\n", p->vet[i].val);
	printf("\n");
}

void totiente(Pilha3 *p){
	int aux=0;
	printf("\n\tNumeros co-primos Euler:");
	for(int i=p->top-1; i>=p->base; i--){
		for (int j = 2; j < p->vet[i].val; j++) {
			if (p->vet[i].val % j == 0) {
				aux++;
			}
		}
		if(aux==0){
			p->vet[i].val-=1;
			
			/*for(int i=0;i<=p->vet[i].val;i++)
				printf("\t\n%d",i);*/
		}else{
			p->vet[i].val-=aux;
		}
		aux=0;
	}for(int i=p->base; i<=p->top-1; i++)
		printf("\t%d",p->vet[i].val);
}
