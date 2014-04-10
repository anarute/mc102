#include <stdio.h>

#define TOTAL 60 
/* o pão me ensinou a usar macro. hahah */

int main () {
	int i, j, k, l, m, n;
	
	for (i = 1; (i <= TOTAL); i++)
		for (j = i+1; (j <= TOTAL); j++)
			for (k = j+1; (k <= TOTAL); k++)
				for (l = k+1; (l <= TOTAL); l++)
					for (m = l+1; (m <= TOTAL); m++)
						for (n = m+1; (n <= TOTAL); n++)
							printf("%2d %2d %2d %2d %2d %2d\n", i,j,k,l,m,n);

	return 0;
}
