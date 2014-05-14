#include <stdio.h>

int main(){
	char linha[80], especial[1];
	int i = 0, campos = 0, charcont[40], chars = 0;
	fgets(linha,80,stdin);
	scanf("%c",especial);
	
	while(linha[i] != '\0' && i < 80){
		if ((linha[i] == especial[0]) || (linha[i+1] == '\0')){
			charcont[campos] = chars;
			campos++;
			chars = 0;
		} else { chars++;};
		i++;
	}
		
	printf("%d", campos);
	for(i = 0; i < campos; i++)
		printf(" %d",charcont[i]);
	printf("\n");
	return 0;
}
