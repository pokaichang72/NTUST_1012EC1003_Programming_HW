#include <stdio.h>


/*
 * perfect()
 * determines if parameter number is a perfect number.
 *
 * input: int x
 * output: int 1(is perfect number), 0(not perfect number)
 */
int perfect(int x)
{
	int i, count=0;

	for ( i=1; i<x; i++ ) {  // calculate the sum of factors
		if ( x%i == 0 ) {
			count += i;
		}
	}

	if (count == x) {  // if the sum of factors equals to the number itself
		return 1;
	} else {
		return 0;
	}
}


int main()
{
	int i, i2;

	for ( i=1; i<=1000; i++ ) {
		if ( perfect(i) ) {
			printf("perfect number: %d, with factors: ", i);
			for ( i2=1; i2<i; i2++ ) {
				if ( i%i2 == 0 ) {
					printf("%d, ", i2);
				}
			}
			printf("%d.\n", i);
		}
	}

	return 0;
}
