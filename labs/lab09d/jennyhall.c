#include <stdio.h>

/* Entrada: Um vetor vazio de números inteiros e seu tamanho. Saida: Sem saida. O vetor é carregado com as notas dentro da função. */

void le_notas (int vetor[], int tamanho);

/* Entrada: Um vetor de números inteiros e seu tamanho. Saida: Sem saída, a ordenação deve ocorrer na própria variável de entrada 'vetor'. */

void ordena (int vetor[], int tamanho);

/* Entrada: Um vetor de números inteiros, seu tamanho e um inteiro 'nota'. Saida: Sem saída, a função deve apenas imprimir as notas em ordem decrescente que tem valor abaixo do parâmetro 'nota' de entrada. */

void imprime_notas (int vetor[], int nota, int tamanho);

int main (){
	int notas[60], n, i, nota;
	
	/* lê n, i e as notas */
	scanf("%d %d", &n, &i);
	
	le_notas(notas, n);
	nota = notas[i];
	
	ordena(notas, n);

	imprime_notas(notas, nota, n);

	return 0;

}

void le_notas (int vetor[], int tamanho){
	int cont;
	for (cont = 0; cont < tamanho; cont++){
		scanf("%d", &vetor[cont]);
		vetor[cont] = vetor[cont];
	}
}

void ordena (int vetor[], int tamanho){
	int cont, cont2, aux;
	for (cont = tamanho - 1; cont > 0; cont--){
                for (cont2 = 0; cont2 < cont; cont2++){
                        if (vetor[cont2] > vetor[cont2+1]){
                                aux = vetor[cont2];
                                vetor[cont2] = vetor[cont2+1];
                                vetor[cont2+1] = aux;
                        }
                }
        }

}

void imprime_notas (int vetor[], int nota, int tamanho){
	int cont;
	for (cont = tamanho - 1; cont >= 0; cont--){
		if (nota >= vetor[cont])
			printf("%d\n",vetor[cont]);
	}
}
