#include <stdio.h>

int main () {
	
	long int vet[1000];
	int tam, i, j, n, aux, max, v;
	
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
	v = vet[0];
	for (j = 0; j < tam; j++){		
		if (v == vet[j+1]){
			aux++;
		} else if (max < aux){
			max = aux;
			aux = 0;
			v = vet[j+1];
		}
	}
	j = 0;
	i = 0;
	aux=0;

	for (j = 0; j < tam; j++){		
		if (vet[j] == vet[j+1]){
			printf("%ld %d\n", vet[j], aux+1);
			aux++;
		}
		else
			aux = 0;
		if (max == aux){
			printf("%ld\n",vet[j]);
		}
	}

	return 0;
}
