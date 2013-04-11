#include <stdio.h>


int main()
{
	int x, steps=0;

	printf("Enter a positive integer: ");

	if ( !scanf("%d", &x) || x < 1 ) {  // if the input is not an integer or is less than 1, print a message and exit.
		printf("ERROR: The input must be a positive integer.\n");
		return -1;
	}

	printf("Inital value is %d\n", x);

	while (x != 1) {  // repeat this process until the value is 1
		if ( x%2 == 0 ) {  // if the number is even, halve it
			x /= 2;
		} else {  // if the number is odd, multiply by 3 and add 1
			x *= 3;
			x++;
		}
		if (x != 1) printf("Next value is %4d\n", x);  // skip this if the value is 1
		steps++;  // step counter
	}

	printf("Final value %d, number of steps %d\n", x, steps);

	return 0;
}
