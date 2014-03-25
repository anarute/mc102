#include <stdio.h>

int main (){
	int h;
	printf("Digite a hora atual (sem minutos, um numero entre 0 e 24):\n");
	scanf("%d",&h);
	if ((h >= 0) && (h < 12)){
		printf("Bom dia, bem-vindo ao curso de MC102!\n");
	} else if ((h >= 12) && (h < 19)) {
		printf("Boa tarde, bem-vindo ao curso de MC102!\n");
	} else if (h >= 19){
		printf("Boa noite, bem-vindo ao curso de MC102!\n");
	}
	return 0;
}
