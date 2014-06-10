#include <stdio.h>
#include <stdlib.h>


int soma(int *vetor, int indice){
	indice--;
	if (indice == -1)
		return 0;
	else
		return vetor[indice] + soma(vetor, indice);
}


void levetor(int *vetor, int tamanho){
	int i;
	for (i = 0; i < tamanho; i++){
		scanf("%d", &vetor[i]);
	}
}

int main(){
	int n, *vet;

	scanf("%d", &n);
	vet = calloc(n,sizeof(int));
	levetor(vet, n);
	printf("%d\n",soma(vet, n));

	return 0;
}
