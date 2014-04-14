#include <stdio.h>

int main () {
	
	int conj1[100], conj2[100];
	int card1, card2, i, j, uniao = 0, intersec = 0;
	
	/* lê conj1 */
	scanf("%d", &card1);
	for (i = 0; i < card1; i++)
		scanf("%d", &conj1[i]);

	/* lê conj2 */
	scanf("%d", &card2);
	for (i = 0; i < card2; i++)
		scanf("%d", &conj2[i]);
	
	for (i = 0; i < card1; i++)
		for (j = 0; j< card2; j++)
			if (conj1[i] == conj2[j]){
				intersec++;
			}
	uniao = card1 + card2 - intersec; 

	printf("%d\n", uniao);
	printf("%d\n", intersec);


	return 0;
}
