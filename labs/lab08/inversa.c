#include <stdio.h>

int main(){
	char st1[80], aux;
	int i, j, tam;
	printf("Digite um texto (max. 80):");
	scanf("%s",st1);
	tam=0;
	while(st1[tam] != '\0' && tam < 80){
		tam++;
	}
	i = 0;
	j = tam -1;
	while(i < j){
		aux = st1[i];
		st1[i] = st1[j];
		st1[j] = aux;
		i++; j--;
	}
	printf("A inversa:%s\n",st1);

	return 0;
}
