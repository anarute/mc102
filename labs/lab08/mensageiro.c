#include <stdio.h>

int main(){
	int r, o, i, silenciado = 0, pos, cont;
	char mrna[100], olig[25];
	scanf("%d %d", &r, &o);
	scanf("%s",mrna);
	scanf("%s",olig);
		
/*
	A - T
	G - C

	U U C A G C G A G G
	A A G U C G C U C C
*/
	/*  substitue as combinações pra facilitar a comparação */
	for (i = 0; i < o; i++){
		if (olig[i] == 'A'){
			olig[i] = 'U';
		}
		else if (olig[i] == 'U'){
			olig[i] = 'A';
		}
		else if (olig[i] == 'G'){
			olig[i] = 'C';
		}
		else { 
			olig[i] = 'G';
		}		
	}
	i = o - 1;
	for(cont = 0; (cont < r) && (i >= 0); cont++){
		printf("%c, %c", mrna[cont], olig[i]);
		if (mrna[cont] == olig[i]){
			silenciado = 1;
			printf(" cont: %d ", cont); 
			if (i == (o - 1))
				pos = cont + 1;				
			i--;
		} else {
			silenciado = 0;
			i = o - 1;
		}			
		printf(" %d\n", silenciado);
	}
	if (silenciado)
		printf("Silenciado em %d\n", pos);
	else
		printf("Nao silenciado\n");

	return 0;
}
