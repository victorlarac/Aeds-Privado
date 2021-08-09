#ifndef GERAL_H 
#define GERAL_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <string.h>

typedef struct Item Item;
typedef struct Block Block;
typedef struct Fila Fila;

struct Item{
	int val;
};

struct Block{
	Item data;
	Block *prox;
};

struct Fila{
	Block *first;
	Block *last;
};


void FFVazia(Fila *f);
void Enfileira(Fila *f, Item d);
void Desenfileira(Fila *f, Item *d);
void FImprime(Fila *f);




typedef struct Item2 Item2;
typedef struct Block2 Block2;
typedef struct Lista Lista;

struct Item2{
	char *val;
};

struct Block2{
	Item2 data;
	Block2 *prox;
};

struct Lista{
	Block2 *first;
	Block2 *last;
};


void FLVazia(Lista *l);
void LInsert(Lista *l, Item2 d);
void LRemove(Lista *l, Item2 d);
void Swap(Block2 *a, Block2 *b);
void LImprime(Lista *l);


typedef struct Item3 Item3;
typedef struct Block3 Block3;
typedef struct Pilha Pilha;

struct Item3{
	char *val;
};

struct Block3{
	Item3 data;
	Block3 *prox;
};

struct Pilha{
	Block3 *base;
	Block3 *top;
};


void FPVazia(Pilha *p);
void Push(Pilha *p, Item3 d);
void Pop(Pilha *p, Item3 *d);
void PImprime(Pilha *p);

//fila de atendimento cada posiçãpo da fila tem uma lista de coisas a serem feitas que são aplicadas em uma pilha

#endif