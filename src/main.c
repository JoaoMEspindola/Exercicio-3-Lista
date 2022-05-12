#include "Lista.h"

int main(){

	Lista listaCadeia, listaSubCadeia;
    Item item;
    FILE *arqCadeia, *arqSubcadeia;	
    FazListaVazia(&listaCadeia);
    arqCadeia = fopen("cadeia.txt", "r");
    while (fgets(item.codon, 4, arqCadeia) != NULL){
        InsereNaLista(&listaCadeia, item);
    }
    fclose (arqCadeia);
    printf("\nCadeia maior: ");
    ImprimeLista(&listaCadeia);

    FazListaVazia(&listaSubCadeia);
    arqSubcadeia = fopen("subcadeia.txt", "r");
    while (fgets(item.codon, 4, arqSubcadeia) != NULL){
        InsereNaLista(&listaSubCadeia, item);
    }
    printf("\nCadeia menor: ");
    ImprimeLista(&listaSubCadeia);
    fclose (arqSubcadeia);

    comparaCadeia(&listaSubCadeia, &listaCadeia);
	return 0;
}