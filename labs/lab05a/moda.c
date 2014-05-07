#include <stdio.h>

int main () {
	
	long int vet[1000];
	int tam, i, j, n, aux, max;
	
	/* lê vetor */
	scanf("%d", &tam);
	for (i = 0; i < tam; i++)
		scanf("%ld", &vet[i]);

	/* ordena vetor */

	for (i = tam - 1; i > 0; i--){
		for (j = 0; j < i; j++){
			if (vet[j] > vet[j+1]){
				n = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = n;
			}
		}
	}
	max = 0;
	aux = 0;	
	for (j = 0; j < (tam -1); j++){		
		if (vet[j] == vet[j+1]){
			aux++;
		} else {
			if (max < aux)
				max = aux;
			aux = 0;
		}
	}
	j = 0;
	i = 0;
	while (i < (tam - max )){		
		if (vet[i] == vet[i+max]){
			printf("%ld\n", vet[i]);
			i = i + max;
		} 
		i++; 
	}

	return 0;
}
