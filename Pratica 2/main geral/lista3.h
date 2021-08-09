#ifndef LISTA3_H
#define LISTA3_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 10

typedef struct {
  int Chave;
  char *nome;
  char *nomel;
  int val;
} TipoItem;

typedef struct TipoCelula *TipoApontador;

typedef struct TipoCelula {
  TipoItem Item;
  TipoApontador Prox;
  
} TipoCelula;

typedef struct {
  TipoApontador Primeiro, Ultimo;

} TipoLista;

void FLVazia(TipoLista *Lista);
int Vazia(TipoLista Lista);
void Insere(TipoItem x, TipoLista *Lista);
void Retira(TipoApontador p, TipoLista *Lista, TipoItem *Item);
void Imprime(TipoLista Lista);
bool compara(TipoLista *Lista1, TipoLista *Lista2);

#endif

