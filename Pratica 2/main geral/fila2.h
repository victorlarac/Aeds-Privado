#ifndef FILA2_H 
#define FILA2_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXTAM2 5

typedef struct Item2{
	int valor;
}Item2;

typedef struct Fila2{
	Item2 vetor[MAXTAM2];
	int first;
	int last;
}Fila2;


void FFVazia2(Fila2 *f);
void Enfileira2(Fila2 *f, Item2 d);
void Desenfileira2(Fila2 *f, Item2 *d);
void FRemove2(Fila2 *f, Item2 d);
void FImprime2(Fila2 *f);

void classificarEntrada(Fila2 *f,Item2 d);
void classificarClasse(Fila2 *f);

#endif