#include <stdio.h>
#include <math.h>


/*
 * gcd()
 * find the greatest common divisor (gcd) of two integers.
 *
 * input: int x, y
 * output: gcd of x and y
 */
int gcd(int x, int y)
{
	int remainder;

	printf("Computing the gcd:\n");

	while (y) {
		remainder = abs(x%y);
		printf("%d/%d = %d ... %d\n", x, y, x/y, remainder);
		x = y;
		y = remainder;
	}

	return x;
}


int main()
{
	int x, y;

	printf("Please enter two numbers: ");
	scanf("%d %d", &x, &y);

	printf("The gcd is %d.\n", gcd(x, y));

	return 0;
}
