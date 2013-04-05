#include <stdio.h>


int main()
{
	int x, sx[5], i;

	printf("Please enter a five-digit integer: ");

	if ( !scanf("%d", &x) || x > 99999 || x < 10000 ) {
		printf("ERROR: input is not a five-digit integer.\n");
		return -1;

	} else {

		if ( ( x%10 == (x/10000)%10 ) && ( (x/10)%10 == (x/1000)%10 ) ) {
			printf("%d is a palindrome.\n", x);

		} else {
			printf("%d is NOT a palindrome.\n", x);

		}

		return 0;
	}
}
