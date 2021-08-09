#ifndef LISTA1_H 
#define LISTA1_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXTAM 10

typedef struct Item{
	int val;
}Item;

typedef struct Lista1{
	Item vet[MAXTAM];
	int first;
	int last;
}Lista1;


typedef struct Lista2{
	Item vetor[MAXTAM];
	int first;
	int last;
}Lista2;

typedef struct Lista3{
	Item vetor[MAXTAM*2];
	int first;
	int last;
}Lista3;

void FL1Vazia(Lista1 *l);
void LInsert1(Lista1 *l, Item d);
void LImprime(Lista1 *l);

void FLVazia2(Lista2 *li);
void LInsert2(Lista2 *li, Item d);
void LImprime2(Lista2 *li);


void Concatenuacao(Lista3 *list,Lista1 l,Lista2 *li);



#endif