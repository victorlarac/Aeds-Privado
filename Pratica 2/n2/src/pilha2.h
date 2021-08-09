#ifndef PILHA2_H 
#define PILHA2_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Item2 Item2;
typedef struct Block Block;
typedef struct Pilha2 Pilha2;

struct Item2{
	int val;
};

struct Block{
	Item2 data;
	Block *prox;
};

struct Pilha2{
	Block *base;
	Block *top;
};


void FP2Vazia(Pilha2 *p);
void Push2(Pilha2 *p, Item2 d);
void Pop(Pilha2 *p, Item2 *d);
void P2Imprime(Pilha2 *p);

void PTransfere(Pilha2 *p,Pilha2 *h);

#endif