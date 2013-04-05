#include <stdio.h>
#include <math.h>


int main()
{
	int i, i2;

	for (i=0; i<9; i++) { // printing the shapes requires 8 lines in total

		/* prints the square by lines */
		for (i2=0; i2<8; i2++) {
			if ( ( i == 0 || i == 8 ) || ( i2 == 0 || i2 == 7 ) ) {
				printf("*");
			} else {
				printf(" ");
			}
		}

		printf("     ");

		/* prints the round by lines */
		for (i2=abs(4-i)-2; i2>0; i2--) {
			printf(" ");
		}
		printf("*");
		for (i2=0; i2<(4-abs(4-i))*2+1; i2++) {
			abs(4-i) == 4? printf("*") : printf(" ");
			if (i2 > 3) break;
		}
		printf("*");
		for (i2=abs(4-i)-2; i2>0; i2--) {
			printf(" ");
		}

		printf("    ");

		/* prints the arrow by lines */
		if (i < 3) {
			for (i2=0; i2<(2-i); i2++) printf(" ");
			for (i2=0; i2<(i*2+1); i2++)  printf("*");
			for (i2=0; i2<(2-i); i2++) printf(" ");
		} else {
			printf("  *  ");
		}

		printf("  ");

		/* prints the diamond by lines */
		for (i2=0; i2<(abs(4-i)+1); i2++) {
			printf(" ");
		}
		printf("*");
		for (i2=0; i2<(3-abs(4-i))*2+1; i2++) {
			printf(" ");
		}
		if (i != 0 && i != 8) printf("*");
		for (i2=0; i2<(abs(4-i)+1); i2++) {
			printf(" ");
		}

		printf("\n");
	}

	return 0;
}
