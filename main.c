#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int tc;
	unsigned long k, a, b, c, d, i, j, count;

	while(scanf("%d",&tc) == 1) {
		for (i = 0; i < tc; i++)
		{
			scanf("%ld", &k);
			count = 0;
			for(j=2; j<= sqrt(k); j++) {
				if(k%j==0 && count == 0) {
					a = j;
					b = k/j;
					count += 2;
            continue;
				}

				if(k%j == 0 && count == 2) {
					c = j;
					d = k/j;
					break;
				}
			}

			printf("Case #%d: %ld = %ld * %ld = %ld * %ld\n", i+1, k, a, b, c, d );
		}
	}

	return 0;
}
