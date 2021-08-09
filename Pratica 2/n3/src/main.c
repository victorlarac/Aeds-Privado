#include "fila1.h"
#include "fila2.h"

int main()
{
	int opcao;
	printf("Escolha uma opcao:");
	scanf("%d",&opcao);
	if(opcao==1){
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

	}else if(opcao==2){
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
	}else{
		printf("\n\tERRO!!!Opcao inexistente!!!");
	}
	return 0;
}
