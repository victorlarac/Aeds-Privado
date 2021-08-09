#ifndef LISTA2_H 
#define LISTA2_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXTAM2 3

typedef struct Item2{
	int val;
}Item2;

typedef struct Lista21{
	Item2 vet[MAXTAM2];
	int first;
	int last;
}Lista21;


typedef struct Lista22{
	Item2 vetor[MAXTAM2];
	int first;
	int last;
}Lista22;

typedef struct Lista23{
	Item2 vetor[MAXTAM2*2];
	int first;
	int last;
}Lista23;

void FL2Vazia(Lista21 *l);
void L2Insert1(Lista21 *l, Item2 d);
void L2Imprime(Lista21 *l);

void FL2Vazia2(Lista22 *li);
void L2Insert2(Lista22 *li, Item2 d);
void L2Imprime2(Lista22 *li);

void Concat(Lista23 *list,Lista21 *l,Lista22 *li);

void play(Lista23 *list,Lista21 *l,Lista22 *li);


#endif