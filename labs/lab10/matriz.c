#include <stdio.h>
#include <stdlib.h>

struct Matriz{
    int *vetor;
    int linhas;
    int colunas;
    int n;
};
typedef struct Matriz Matriz;

/* Entrada: Dois inteiros que representam o número de linhas e colunas, respectivamente, da matriz que será criada.
 * Saida: Ponteiro para a estrutura Matriz recém alocada. */
Matriz* CriaMatriz (int nlinhas, int ncolunas){	
	Matriz *mat;
	mat = malloc(sizeof(Matriz));

	mat->linhas = nlinhas;
	mat->colunas = ncolunas;
	mat->n = nlinhas*ncolunas;
	mat->vetor = malloc(nlinhas*ncolunas*sizeof(int));	

	return mat;
}

/* Entrada: Ponteiro para a matriz que será destruída.
 * Saida: Sem saída. O ponteiro da matriz é desalocado. */
void DestroiMatriz (Matriz *m){
	free(m->vetor);
	free(m);
}

/* Entrada: Ponteiro para a matriz que será impressa.
 * Saida: Sem saída. As células da matriz são impressas. */
void ImprimeMatriz (Matriz *m){
	int i;
	printf("\n");
	for (i = 0; i < m->n; i++){
		printf("%d ", m->vetor[i]);
		if ((i % m->colunas - 1) == 0)
			printf("\n");
	} 
}

/* Entrada: Ponteiro para a matriz que será carregada.
 * Saida: Sem saída. As células da matriz são preenchidas por dados da entrada padrão. */
void CarregaMatriz (Matriz *m){
	int i;
	for (i = 0; i < m->n; i++){
		scanf("%d", &m->vetor[i]);
	} 
}

/* Entrada: Ponteiro para a matriz e inteiro 'indice'.
 * Saida: Número da linha na representação 2D correspondente a coordenada 'indice' da representação 1D. */
int LinhaDadoIndice (Matriz *m, int indice){
	return indice/m->colunas;
}

/* Entrada: Ponteiro para a matriz e inteiro 'indice'.
 * Saida: Número da coluna na representação 2D correspondente a coordenada 'indice' da representação 1D. */
int ColunaDadoIndice (Matriz *m, int indice){
	return indice%m->colunas;
}

int main(){
	int m1, n1, m2, n2;
	Matriz *mat1, *mat2;
	
	scanf("%d %d",&m1,&n1);
	mat1 = CriaMatriz(m1, n1);
	CarregaMatriz(mat1);

	scanf("%d %d",&m2,&n2);
	mat2 = CriaMatriz(m2, n2);	
	CarregaMatriz(mat2);
	
	ImprimeMatriz(mat1);
	ImprimeMatriz(mat2);
	
	DestroiMatriz(mat1);
	DestroiMatriz(mat2);
	return 0;
}
