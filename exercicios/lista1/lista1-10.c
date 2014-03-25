#include <stdio.h>

int main (){

	int i, n;
	char primo;

	for (i=5001; i<7000; i=i+2){
		primo = 1;
		for (n=3; n<(i/2); n=n+2){
			if (i%n == 0){
				primo = 0;			
				break;
			}
		}
		if (primo == 1)
			printf("%d\n",i);
	}
	return 0;

}
