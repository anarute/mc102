#include <stdio.h>

int main(){
	int x;
	float result;
	printf("Digite um inteiro:");
	scanf("%d", &x);
	if (x > 0){
			result = (float)(5*(x-32))/9;
	} else {
		result = (float)x*(9/5) + 32;
	}
	printf("%.2f\n", result);
	return 0;
}
