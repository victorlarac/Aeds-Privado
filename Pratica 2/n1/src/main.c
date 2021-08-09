#include "lista1.h"
#include "lista2.h"
#include "lista3.h"

int main()
{
	int opcao;
	printf("Escolha uma opcao:");
	scanf("%d", &opcao);

	if(opcao==1){
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

	}else if(opcao ==2){
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
	}else if(opcao ==3){

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

	
	}else{
		printf("OPCAO INVALIDA!!SAINDO!");
	}
	

return 0;

}
