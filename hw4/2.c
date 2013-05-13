#include <stdio.h>

#define MAX 1000


int main()
{
	int n[MAX+1], i, j;
	for (i=1; i<=MAX; i++) n[i] = 1; // Initialize
	n[0] = 0;
	n[1] = 0;

	for (i=2; i<=MAX; i++) {
		if (n[i]) {
			for (j=i*2; j<=MAX; j+=i) {
				n[j] = 0;
			}
		}
	}

	for (i=1; i<=MAX; i++) {
		if (n[i]) printf("%d ", i);
	}

	return 0;
}

