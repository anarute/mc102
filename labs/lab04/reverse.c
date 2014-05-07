#include <stdio.h>

int main (){
	int x,reverse, r, d;
	scanf("%d",&x);	
	r = 0;
	d = 10;
	reverse = 0;
	do {
		r = x % d;
		x = x / d; 
		reverse = (reverse * d) + r;
	}
	while (x > 0);

	printf("%d\n",reverse);
	return 0;
}
