#ifndef PILHA1_H 
#define PILHA1_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define MAXTAM 10

typedef struct Item{
	//int val;
	char *parentreses;
}Item;

typedef struct Pilha{
	Item vet[MAXTAM];
	int top;
	int base;
}Pilha;

void FPVazia(Pilha *p);
void PUSH(Pilha *p, Item d);
void POP(Pilha *p, Item *d);
void POrganiza(Pilha *p, Item *d);
void PImprime(Pilha *p);

bool condicao(Pilha *pi, Item d);

#endif