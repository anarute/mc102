#include <stdio.h>
#include <math.h>

int main (){
	int notas[100000], n, i, j, aux, soma = 0, acima = 0;
	float media, mediana, desvio = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d", &notas[i]);
		soma = soma + notas[i];
	}

	for (i = n - 1; i > 0; i--){
                for (j = 0; j < i; j++){
                        if (notas[j] > notas[j+1]){
                                aux = notas[j];
                                notas[j] = notas[j+1];
                                notas[j+1] = aux;
                        }
                }
        }

	media = (float)soma / n;

	/* calcula acima da media e parte do desvio */
	for (i = 0; i < n; i++){
		if (notas[i] > media)
			acima++;
		desvio = desvio + (notas[i] - media)*(notas[i] - media);
	}
	desvio = sqrt(desvio/n);

	if (n % 2 == 0)
		mediana = (float)(notas[(n/2) - 1] + notas[n/2])/2;
	else
		mediana = notas[n/2];

	printf("Media: %.2f\n", media);
	printf("Acima da media: %d\n", acima);
	printf("Mediana: %.2f\n", mediana);
	printf("Variancia: %.2f\n", desvio*desvio);
	printf("Desvio padrao: %.2f\n", desvio);
	return 0;

}
