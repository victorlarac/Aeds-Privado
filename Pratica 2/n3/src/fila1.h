#ifndef FILA1_H 
#define FILA1_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <math.h>
#define MAXTAM 4

typedef struct Item{
	int val;
}Item;

typedef struct Fila{
	Item vet[MAXTAM];
	int first;
	int last;
}Fila;


void FFVazia(Fila *f);
void Enfileira(Fila *f, Item d);
void Desenfileira(Fila *f, Item *d);
void FRemove(Fila *f, Item d);
void FImprime(Fila *f);

void Executa(Fila *f,Item d1,Item d2,Item d3);
#endif