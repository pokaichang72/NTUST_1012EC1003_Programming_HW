#include <stdio.h>

#define MAX 1000


int main()
{
	int is_prime[MAX+1], i, j;
	for (i=1; i<=MAX; i++) is_prime[i] = 1;  // Initialize
	is_prime[0] = 0;
	is_prime[1] = 0;

	for (i=2; i<=MAX; i++) {
		if (is_prime[i]) {  // If i is an prime number
			for (j=i*2; j<=MAX; j+=i) {  // mark all multiples of i as non-prime
				is_prime[j] = 0;
			}
		}
	}

	/* print result */
	for (i=1; i<=MAX; i++) {
		if (is_prime[i]) printf("%4d ", i);
	}

	printf("\n");

	return 0;
}
