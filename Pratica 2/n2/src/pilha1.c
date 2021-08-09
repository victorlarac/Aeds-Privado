#include "pilha1.h"


void FPVazia(Pilha *p){
	p->top   = 0;
	p->base  = 0;
}


void PUSH(Pilha *p, Item d){
	if (p->top >= MAXTAM){
		printf("PILHA CHEIA!\n");
	}else{
		p->vet[p->top] = d;
		p->top ++;
	}
}

void POP(Pilha *p, Item *d){
	if(p->base == p->top)
		printf("PILHA VAZIA!\n");
	else{
			p->top --;
			*d = p->vet[p->top];
	}
}


bool condicao(Pilha *pi, Item d){
	bool aux=true;
	if(strcmp(pi->vet[0].parentreses,")") == 0){
		return false;
		
	}else{
		for(int i=pi->base; i<=pi->top-1; i++){
			if(strcmp(pi->vet[i].parentreses,"(") == 0){
				for(int i=pi->base; i<=pi->top-1; i++){
					if(strcmp(pi->vet[i].parentreses,")") == 0){
						pi->vet[i].parentreses="-";
						aux=true;
						break;
					}else if(i==pi->top-1){
						aux=false;
						break;
					}
				}
				if(aux==false){
				    
					break;
				}else{
					pi->vet[i].parentreses="-";	
					aux=true;
				}
			}
		}return aux;
	}
}
void PImprime(Pilha *p){
	for(int i=p->top-1; i>=p->base; i--)
		printf("%s\n", p->vet[i].parentreses);
	printf("\n");
}


void POrganiza(Pilha *p, Item *d){
	if(p->base == p->top)
		printf("PILHA VAZIA!\n");
	else{
		if(strcmp(p->vet[p->top].parentreses,")") != 0 || strcmp(p->vet[p->top].parentreses,"(") != 0 ){
			p->base ++;
			*d = p->vet[p->top];
		}
	}
}
