#include "lista3.h"



void FLVazia(TipoLista *Lista)
{ 
  Lista -> Primeiro = (TipoApontador) malloc(sizeof(TipoCelula));
  Lista -> Ultimo = Lista -> Primeiro;
  Lista -> Primeiro -> Prox = NULL;
}

int Vazia(TipoLista Lista)
{ 
  return (Lista.Primeiro == Lista.Ultimo);
}

void Insere(TipoItem x, TipoLista *Lista)
{ Lista -> Ultimo -> Prox = (TipoApontador) malloc(sizeof(TipoCelula));
  Lista -> Ultimo = Lista -> Ultimo -> Prox;
  Lista -> Ultimo -> Item = x;
  Lista -> Ultimo -> Prox = NULL;
}


void Imprime(TipoLista Lista)
{ int n=0;
  TipoApontador Aux,aux[n];
  Aux = Lista.Primeiro -> Prox;
  while (Aux != NULL) 
    { 
      printf("%s\n", Aux -> Item.nome);
      /*aux[n]=Aux;
      printf("%s\n", aux[n]->Item.nome);
      n++;*/
      Aux = Aux -> Prox;
    }
}


bool compara(TipoLista *Lista1, TipoLista *Lista2)
{
  TipoApontador Aux1, Aux2;
  bool igual = true;
  Aux1 = Lista1->Primeiro->Prox;
  Aux2 = Lista2->Primeiro->Prox;
  printf("\n\n__________Comparando %s e %s__________\n\n\t",Aux1->Item.nomel,Aux2->Item.nomel);
  while (Aux1 != NULL || Aux2 )
  {
    if (strcmp(Aux1->Item.nome,Aux2->Item.nome) != 0 )
    {
      igual = false;
      printf("Produtos Diferentes\t\n");
      break;
      
    }else{
      if (Aux1->Item.val > Aux2->Item.val){
        printf("\nO supermercado com o maior valor é:%s",Aux1->Item.nomel);
        printf("\nProduto: %s",Aux1->Item.nome);
        printf("\nValor: %d",Aux1->Item.val);
      }else if (Aux1->Item.val < Aux2->Item.val){
        printf("\nO supermercado com o maior valor e:%s",Aux2->Item.nomel);
        printf("\nProduto: %s",Aux2->Item.nome);
        printf("\nValor: %d",Aux2->Item.val);
      }else{
        printf("\nAmbos os supermecados possuem o mesmo valor");
        printf("\nProduto: %s",Aux2->Item.nome);
        printf("\nValor: %d",Aux2->Item.val);
      }
      Aux1 = Aux1->Prox;
      Aux2 = Aux2->Prox;
      return igual;
  }
  }
}
void Retira(TipoApontador p, TipoLista *Lista, TipoItem *Item)
{ /*  ---   Obs.: o item a ser retirado e  o seguinte ao apontado por  p --- */
  TipoApontador q;
  if (Vazia(*Lista) || p == NULL || p->Prox == NULL)
  {
    printf(" Erro   Lista vazia ou posi  c   a o n  a o existe\n");
    return;
  }
  q = p->Prox;
  *Item = q->Item;
  p->Prox = q->Prox;
  if (p->Prox == NULL)
    Lista->Ultimo = p;
  free(q);
}



