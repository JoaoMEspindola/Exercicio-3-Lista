#include "Lista.h"

void Troca(Item *a, Item *b){
	Item aux;
	aux = *a;
	*a  = *b;
	*b  = aux;
}

void FazListaVazia(Lista *l){
	l->first = 0;
	l->last  = 0;
}

void InsereNaLista(Lista *l, Item d){
	if (l->last >= MAXTAM){
		printf("LISTA CHEIA!\n");
	}else{
		l->vet[l->last] = d;
		l->last ++;
	}
}

void RemoveDaLista(Lista *l, Item d){
	bool ok = false;

	if(l->first == l->last)
		printf("LISTA VAZIA!\n");
	else{
		for(int i=l->first; i<l->last; i++)
			if(l->vet[i].codon == d.codon){
				Troca(&l->vet[i], &l->vet[i+1]);
				ok = true;	
			}
	
		if(ok)
			l->last --;
	}
}

void ImprimeLista(Lista *l){
	for(int i=l->first; i<l->last; i++)
		printf("\t%s", l->vet[i].codon);
	printf("\n");
}

void comparaCadeia(Lista *l1, Lista *l2){
	bool achouCodon;
	for (int i = l1->first; i < l1->last; i++){
		if (achouCodon != true){
			for (int j = l2->first; j < l2->last; j++){
				if (strcmp(l1->vet[i].codon, l2->vet[j].codon) == 0){
					printf("\nCódon %s encontrado na posição %d da maior cadeia.", l2->vet[j].codon, j);
					achouCodon = true;
					for (int k = i+1; k < l1->last; k++){
						if (strcmp(l1->vet[k].codon, l2->vet[j+k].codon) == 0){
							printf("\nContinuação da cadeia %s na posição %d\n", l1->vet[k].codon, j+k);
						}
					}
				}
			}
		}
	}
}