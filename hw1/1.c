#include <stdio.h>


int main()
{
	float x;

	printf("Please enter a number of degrees F, or enter a non-number to quit:\n");

	while ( scanf("%f", &x) ) {
		printf("%f degrees F equals to %f degrees C.\n\n", x, (x-32)*5/9);
	}

	return 0;
}
