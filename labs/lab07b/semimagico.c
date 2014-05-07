#include <stdio.h>

int main (){
	int n, i, j, matriz[10][10], cm, somac = 0, somal = 0;
	int magico = 1, somad1 = 0, somad2 = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &matriz[i][j]);
	
	cm = (n * ((n*n) + 1))/2;

	for (i = 0; (i < n) && (magico); i++){
		somac = 0;
		somal = 0;
		for(j = 0; (j < n) && (magico); j++){
			somac = somac + matriz[i][j];
			somal = somal + matriz[j][i];

			if (j == (n-1)){
				if((cm != somac) || (cm != somal)){
					magico = 0;
				}
			}
		}
	
	}
	if (magico){
		for (i = 0, (j = (n -1)); (i < n); i++, j--){
			somad1 = somad1 + matriz[i][i];
			somad2 = somad2 + matriz[i][j];
		}
		if ((somad1 == cm) && (somad2 == cm))
			magico = 0;
	}
	if (magico)
		printf("Sim\n");
	else
		printf("Nao\n");
	return 0;
}
