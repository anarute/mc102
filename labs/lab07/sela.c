#include <stdio.h>

int main (){
	int linhas, colunas, i, j = 0, matriz[100][100], sela = 0;
	int temsela = 0, ptl = 0, ptc = 0;

	scanf("%d %d", &linhas, &colunas);
	/* le matriz */
        for (i = 0; i < linhas; i++)
                for(j = 0; j < colunas; j++)
                        scanf("%d", &matriz[i][j]);
	for (i = 0; (i < linhas) && (temsela == 0); i++){
		j = 0;
		sela = matriz[i][j];
		ptl = i;
		ptc = j;
		/* acha o minimo */
		for(j = 0; (j < colunas); j++){
			if (sela > matriz[i][j]){
				sela = matriz[i][j];
				ptl = i;
				ptc = j;
				temsela = 1;
			} else if (sela == matriz[i][j]) {
				if((ptl == i) && (ptc == j)){
					temsela = 1;
				} else { 
					temsela = 0;
				}
			} 
		}

		for (j = 0; (j < linhas) && (temsela); j++){
			if ((sela <= matriz[j][ptc]) && (j != ptl)){				
				temsela = 0; 
				break;
			} else { 
				temsela = 1;
			}
			if ((j == (linhas - 1)) && (temsela == 1)){
				break;
			} 
		}
	}

	if (temsela == 1){
		printf("(%d, %d) eh o ponto de sela cujo valor eh %d.\n", ptc, ptl, sela);
	} else {
		printf("Nao existe um ponto de sela.\n");
	}
	return 0;

}
