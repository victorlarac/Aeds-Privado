#include "geral.h"

int main()
{
    //Fila de atendimento 
    Fila f;
	Item aux;
	int num;

	FFVazia(&f);
	printf("Digite quantas pessoas tem na fila:");
	scanf("%d",&num);

	for(int i=0;i<num;i++){
		aux.val = i;
		Enfileira(&f, aux);
	}
	FImprime(&f);
	
	printf("Digite quantas pessoas sairam da fila:");
	scanf("%d",&num);
	for(int i=num;i<=0;i--){
		printf("Desenfileira\n");
		aux.val = i;
		Desenfileira(&f, &aux);
	}

	FImprime(&f);

    //Lista de afazeres
	char *nome;
    Lista l;
	Item2 aux2;

	FLVazia(&l);
	printf("Digite a lista de afazeres:(digite sair)");
	scanf("%s",nome);

	while(strcmp(nome,"sair") != 0){

	aux2.val = nome;
	LInsert(&l, aux2);
	}

	LImprime(&l);
	printf("Digite a lista de afazeres:(digite sair)");
	scanf("%s",nome);
	while(strcmp(nome,"sair") != 0){
	LImprime(&l);
	aux2.val = nome;
	LRemove(&l, aux2);
	}

	LImprime(&l);


    //Armazena na pilha
	Pilha p;
	Item3 aux3;
	char *armazena;

	FPVazia(&p);
	Block2 *au;

	au = l.first->prox;
	while(au != NULL){
		armazena = au->data.val;
		au = au->prox;
			aux3.val = armazena;
		Push(&p, aux3);
	}
	
	

	PImprime(&p);

	Pop(&p, &aux3);
	printf("Valor desempilhado:%d\n", aux3.val);
	
	PImprime(&p);

	return 0;
}
