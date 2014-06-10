#include <stdio.h>
#include <math.h>

/* Entrada: Um vetor de números reais e seu tamanho. Saida: Soma de todos os elementos em 'vetor'. */
float soma (float vetor[], int tamanho){
	int i;
	float soma = 0;
	for (i = 0; i < tamanho; i++){
		soma = soma + vetor[i];
	}
	return soma;
}

/* Entrada: Um vetor de números reais e seu tamanho. Saida: Média de todos os elementos em 'vetor'.*/
float media (float vetor[], int tamanho){
	return soma(vetor,tamanho)/tamanho;
}

/* Entrada: Um vetor de números reais e seu tamanho. Saida: Mediana do vetor. */
float mediana (float vetor[], int tamanho){
	float mediana;
	if (tamanho % 2 == 0)
		return mediana = (float)(vetor[(tamanho/2) - 1] + vetor[tamanho/2])/2;
	else
		return mediana = vetor[tamanho/2];
}

/* Entrada: Um vetor de números reais e seu tamanho. Saida: Desvio Padrão de todos os elementos em 'vetor'.*/
float desvio_padrao (float vetor[], int tamanho){
	int i;
	float desvio = 0, mediav;
	mediav = media(vetor,tamanho);
	for (i = 0; i < tamanho; i++){
		desvio = desvio + (vetor[i] - mediav)*(vetor[i] - mediav);
	}
	desvio = sqrt(desvio/tamanho);
	return desvio;
}
/* Entrada: Um vetor de números reais e seu tamanho. Saida: Variância de todos os elementos em 'vetor'. */
float variancia (float vetor[], int tamanho){
	float variancia;
	variancia = desvio_padrao(vetor,tamanho);
	return variancia*variancia;
}


/* Entrada: Um vetor de números reais e seu tamanho. Saida: Sem saída, a ordenação deve ocorrer na própria variável de entrada 'vetor'. */
void ordena (float vetor[], int tamanho);

int main (){
	float notas[100000];
	int n, i, acima = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%f", &notas[i]);
	}
	
	ordena(notas, n);
	for (i = 0; i < n; i++){
		if (notas[i] > media(notas,n))
			acima++;
	}
	printf("Media: %.1f\n", media(notas,n));
	printf("Acima da media: %d\n", acima);
	printf("Mediana: %.1f\n", mediana(notas,n));
	printf("Variancia: %.1f\n", variancia(notas,n));
	printf("Desvio padrao: %.1f\n", desvio_padrao(notas,n));
	return 0;

}

void ordena(float vetor[], int tamanho){
	int i, j, aux;
	for (i = tamanho - 1; i > 0; i--){
                for (j = 0; j < i; j++){
                        if (vetor[j] > vetor[j+1]){
                                aux = vetor[j];
                                vetor[j] = vetor[j+1];
                                vetor[j+1] = aux;
                        }
                }
        }

}
