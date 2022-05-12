#ifndef LISTA_H 
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <string.h>

#define MAXTAM 100

typedef struct Item{
	char codon[4];
}Item;

typedef struct Lista{
	Item vet[MAXTAM];
	int first;
	int last;
}Lista;


void FazListaVazia(Lista *l);
void InsereNaLista(Lista *l, Item d);
void RemoveDaLista(Lista *l, Item d);
void Troca(Item *a, Item *b);
void ImprimeLista(Lista *l);
void comparaCadeia(Lista *l1, Lista *l2);

#endif