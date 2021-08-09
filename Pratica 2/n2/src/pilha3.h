#ifndef PILHA3_H 
#define PILHA3_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define MAXTAM3 20

typedef struct Item3{
	int val;
}Item3;

typedef struct Pilha3{
	Item3 vet[MAXTAM3];
	int top;
	int base;
}Pilha3;

void FP3Vazia(Pilha3 *p);
void PUSH3(Pilha3 *p, Item3 d);
void P3Imprime(Pilha3 *p);

void totiente(Pilha3 *p);

#endif