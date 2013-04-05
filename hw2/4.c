#include <stdio.h>


/*
 * to_b: Converts decimal to binary
 * Input: integer d
 * Output: integer
*/
int to_b(int d)
{
	int b;

	// Using Recursive Method
	if ( d == 0 ) {
		return 0;
	} else {
		b = d%2 + to_b(d/2)*10;
		return b;
	}
}


int main()
{
	int i;


	printf("|    Dec    |    Bin    |    Oct    |    Hex    |\n| --------- | --------- | --------- | --------- |\n");

	for ( i=1; i<=256; i++ ) {
		printf("| %9d | %9d | %9o | %9X |\n", i, to_b(i), i, i);
	}


	return 0;
}


