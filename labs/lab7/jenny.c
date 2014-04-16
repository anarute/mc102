#include <stdio.h>

int main () {
	
/*	int ids[60], n, i, cont; */
	int n, i, cont, cont2, aux, notas[60], notasord[60];
	
	/* lê n, i e as notas */
	scanf("%d %d", &n, &i);
	for (cont = 0; cont < n; cont++){
		scanf("%d", &notas[cont]);
		notasord[cont] = notas[cont];
	}

	for (cont = n - 1; cont > 0; cont--){
                for (cont2 = 0; cont2 < cont; cont2++){
                        if (notasord[cont2] > notasord[cont2+1]){
                                aux = notasord[cont2];
                                notasord[cont2] = notasord[cont2+1];
                                notasord[cont2+1] = aux;
                        }
                }
        }

	for (cont = n - 1; cont >= 0; cont--){
		if (notas[i] >= notasord[cont])
			printf("%d\n",notasord[cont]);
	}
	
	return 0;
}
