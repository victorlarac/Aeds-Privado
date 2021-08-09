#include "pilha1.h"
#include "pilha2.h"
#include "pilha3.h"

int main()
{
	int opcao;
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
	}else{
		printf("\nERRO!Opcao inexistente!EXIT PROGRAM!!\n\n");
	}


	return 0;
}
