#include "fila2.h"


void FFVazia2(Fila2 *f){
	f->first = 1;
	f->last  = 1;
}

void Enfileira2(Fila2 *f, Item2 d){
	if (f->last % MAXTAM2 + 1 == f->first){
		printf("FILA CHEIA!\n");
	}else{
		f->vetor[f->last - 1] = d;
		f->last = f->last % MAXTAM2 + 1;
	}
}

void Desenfileira2(Fila2 *f, Item2 *d){
	if(f->first == f->last)
		printf("FILA VAZIA!\n");
	else{
		*d = f->vetor[f->first - 1];
		f->first = f->first % MAXTAM2 + 1;
	}
}

void FRemove2(Fila2 *f, Item2 d){
	Fila2 aux;
	Item2 rem;
	
	FFVazia2(&aux);

	if(f->first == f->last)
		printf("FILA VAZIA!\n");
	else{
		while(f->first != f->last){
			Desenfileira2(f, &rem);
			if(rem.valor != d.valor)
				Enfileira2(&aux, rem);
		}
		
		*f = aux;
	}
}

void FImprime2(Fila2 *f){
	for(int i=f->first-1; i<f->last-1; i++)
		printf("%d\t", f->vetor[i].valor);
	printf("\n");
}

void classificarEntrada(Fila2 *f,Item2 d){
	for(int i=f->first-1; i<f->last-1; i++){
		if(f->vetor[i].valor>=d.valor){
			printf("\nClasse do vetor: %d\t",i);
			printf("\nValor do ponto: %d\t\n",f->vetor[i].valor);
		}
		/*if(f->vetor[i].valor==f->vetor[f->last-2].valor){
			printf("\nClasse do ultimo vetor: %d\t",i);
			printf("\nValor do ultimo ponto: %d\t\n",f->vetor[i].valor);
		}
		if(d.valor==f->vetor[f->last-2].valor)
			printf("\n\tA classe informada é a ultima.\n");*/
	}	
}
void classificarClasse(Fila2 *f){
	int val=0,aux=0;
	for(int i=f->first-1; i<f->last-1; i++){
		if(f->vetor[i].valor!=f->last-2){
			if(f->vetor[i].valor>=f->vetor[i+1].valor){
				aux=i;
				val=f->vetor[i].valor;
			}
		}
	}
	printf("\nClasse do ponto de maior valor: %d\t",aux);
	printf("\nValor do ponto: %d\t\n",val);
}