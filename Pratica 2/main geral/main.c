#include "pilha1.h"
#include "pilha2.h"
#include "pilha3.h"
#include "fila1.h"
#include "fila2.h"
#include "lista1.h"
#include "lista2.h"
#include "lista3.h"
#include "geral.h"

int main()
{
	int opcao;
	printf("\n_________MENU DE OPCOES________\t");
	printf("\n1. Numero 1 Letra a\t");
	printf("\n2. Numero 1 Letra b\t");
	printf("\n3. Numero 1 Letra c\t");
	printf("\n4. Numero 2 Letra a\t");
	printf("\n5. Numero 2 Letra b\t");
	printf("\n6. Numero 2 Letra c\t");
	printf("\n7. Numero 3 Letra a\t");
	printf("\n8. Numero 3 Letra b\t");
	printf("\n9. Numero 4 Exercicio Final\t");
	printf("\n________________________________\t");
	printf("Escolha a opaoo desejada:");
	scanf("%d",&opcao);
	if(opcao==1){
		Pilha p;
		Item aux;
		FPVazia(&p);
		printf("\nParenteses Aleatorios\t\n\n");
		for(int i=0;i<MAXTAM;i++){
			int r;
			r=rand()%2+0;
			

			if(r==1){
				aux.parentreses="(";
				PUSH(&p, aux);
				//POrganiza(&p,&aux);
			}else{
				aux.parentreses=")";
				PUSH(&p, aux);
				//POrganiza(&p,&aux);
				
			}
			printf("%s ",aux.parentreses);
		}
		/*for(int i=0;i<MAXTAM/2;i++){
			int r;
		
				aux.parentreses="(";
				PUSH(&p, aux);

				aux.parentreses=")";
				PUSH(&p, aux);
		}*/
		printf("\n\n\n");
		
		

		PImprime(&p);

		if(condicao(&p,aux)){
			printf("Certo.\n\t");
		}else{
			printf("Errado.\n\t");
		}
	}else if(opcao==2){
		
		Pilha2 p1,p2;
		Item2 aux2;

		FP2Vazia(&p1);

		aux2.val = 10;
		Push2(&p1, aux2);
		aux2.val = 20;
		Push2(&p1, aux2);
		aux2.val = 30;
		Push2(&p1, aux2);



		P2Imprime(&p1);

		PTransfere(&p2,&p1);

		P2Imprime(&p2);

		/*Pop(&p, &aux);
		printf("Valor desempilhado:%d\n", aux.val);
		
		PImprime(&p);*/


			/*Pop(&p, &aux);
			printf("Valor desempilhado:%d\n", aux.val);
			
			PImprime(&p);*/

	}	
	else if(opcao==3){

		Pilha3 p3;
		Item3 i3;

		FP3Vazia(&p3);
		printf("\n\tNumeros gerados:");
		for(int i=0;i<MAXTAM3;i++){
			int r;
			r=rand()%99+0;
			i3.val=r;
			PUSH3(&p3, i3);
			printf("\t%d",i3.val);
		}
		totiente(&p3);
		//numeros primos menos menos 1
		//os que nn são primos subtrair os multiplos, por exemplo 8 4 2 1

	if(opcao==4){
		Lista1 l;
		Lista2 li;
		Lista3 list;
		Item v,e;
		int aux;
		
		FL1Vazia(&l);
		FLVazia2(&li);
		

		for(int i=0;i<MAXTAM*2;i++){
			aux = rand()%99;
			//printf("%d \t",aux);
			if(aux%2==0){
				v.val=aux;
				LInsert1(&l, v);
				
			}else{
				e.val=aux;
				LInsert2(&li, e);
				
			}	
		}
		
		LInsert1(&l, v);
		
		LImprime(&l);
		LImprime2(&li);

		Concatenuacao(&list,l,&li);

	}else if(opcao ==5){
		printf("____________EXERCICIO 2____________");
		printf("\n\n");
		Lista21 l;
		Lista22 li;
		Lista23 list;
		Item2 v,e;
		int aux;
		
		
		FL2Vazia(&l);
		FL2Vazia2(&li);
		for(int i=0;i<MAXTAM2;i++){
			aux = rand()%13+1;
			v.val=aux;
			L2Insert1(&l, v);	
		}
		for(int i=0;i<MAXTAM2;i++){
			aux = rand()%13+1;
			e.val=aux;
			L2Insert2(&li, e);
		}
				
	
		
		
		L2Insert1(&l, v);
		
		L2Imprime(&l);
		L2Imprime2(&li);

		Concat(&list,&l,&li);
		play(&list,&l,&li);
	}else if(opcao ==6){

	 	TipoLista lista1, lista2, lista3; //cada lista é um supermercado
		Vazia(lista1);
		Vazia(lista2);
		Vazia(lista3);
		FLVazia(&lista1);
		FLVazia(&lista2);
		FLVazia(&lista3);



		TipoItem item1;
		item1.Chave = 0;
		item1.nome = "Feijao";
		item1.val = 12;
		item1.nomel="SupermercadoS";
		Insere(item1,&lista1);
		
		TipoItem item2;
		item2.Chave = 1;
		item2.nome = "Arroz";
		item2.val = 15;
		item2.nomel="SupermercadoV";
		Insere(item2,&lista2);

		TipoItem item3;
		item3.Chave = 2;
		item3.nome = "Feijao";
		item3.val = 20;
		item3.nomel="SupermercadoX";
		Insere(item3,&lista3);


		compara(&lista1,&lista2);
		compara(&lista2,&lista3);
		compara(&lista1,&lista3);


		TipoItem item4;
		item4.Chave = 2;
		item4.nome = "Arroz";
		item4.val = 20;
		item4.nomel="SupermercadoX";
		Insere(item4,&lista3);
		compara(&lista1,&lista3);

		printf("\n\n");
	}

	if(opcao==7){
		Fila f1,f2;
		Item x,y,k;

		FFVazia(&f1);

		x.val = 10;
		Enfileira(&f1, x);
		y.val = 1;
		Enfileira(&f1, y);
		k.val=2;
		Enfileira(&f1, k);
		Executa(&f2, x , y, k);
		
		FImprime(&f1);
		FImprime(&f2);

	}else if(opcao==8){
		Fila2 f;
		Item2 aux;

		FFVazia2(&f);

		aux.valor = 10;
		Enfileira2(&f, aux);
		aux.valor = 1;
		Enfileira2(&f, aux);
		aux.valor=2;
		Enfileira2(&f, aux);
		aux.valor=3;
		Enfileira2(&f, aux);

		classificarEntrada(&f, aux);

		classificarClasse(&f);

		
		FImprime2(&f);
	}else if(opcao == 9){
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
	}

	}else{
		printf("\nERRO!Opcao inexistente!EXIT PROGRAM!!\n\n");
	}


	return 0;

}
//Nao foi possivel terminar o main geral é apenas um prototipo