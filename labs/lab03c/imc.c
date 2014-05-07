#include <stdio.h>

int main (){
	float m, h, imc;
	printf("Massa:\n");
	scanf("%f",&m);
	printf("Altura:\n");
	scanf("%f",&h);
	
	imc = m/(h*h);

	if (imc > 0){
		if (imc < 17) {
			printf("Muito abaixo do peso\n");
		}
		else if ((imc >= 17) && (imc < 18.5)) {
			printf("Abaixo do peso\n");
		} else if ((imc >= 18.5) && (imc < 24.5)){
			printf("Peso Normal\n");
		} else {
			printf("Acima do peso\n");
		}
	}

	return 0;

}
