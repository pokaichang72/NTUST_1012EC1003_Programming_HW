#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
 * swap()
 * Swap two integers using XOR.
 *
 * *a, *b: Memory address of the two variables you want to swap.
 */
void swap(int *a, int *b)
{
	if (*a != *b) {
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}
}


/*
 * shuffle()
 * Shuffle a 4x13 matrix of cards.
 *
 * wDeck: the 4x13 matrix of cards int(1~53).
 * returns: time spent (sec).
 */
float shuffle(int wDeck[4][13])
{
	/* statrt timer */
	clock_t clock_start, clock_end;
	clock_start = clock();

	/* do the shuffle! */
	int row, column, i, j;
	int swapped[4][13]={0};

	for (i=0; i<4; i++) {
		for (j=0; j<13; j++) {
			if (!swapped[i][j]) {
				if ( (row=rand()%4) != i || (column=rand()%13) != j ) {
					swap(&wDeck[i][j], &wDeck[row][column]);
					swapped[i][j] = 1;
					swapped[row][column] = 1;
				}
			}
		}
	}


	/* stop timer */
	clock_end = clock();
	return (double)(clock_end-clock_start)/CLOCKS_PER_SEC;
}


int main()
{
	srand(time(NULL)+(int)clock()+getpid());

	int deck[4][13], i;
	for (i=0; i<52; i++) deck[i/13][i%13] = i+1;  // initialize a deck of cards

	printf("Time spent during shuffle: %f sec.", shuffle(deck));

	/* Print the resault */
	printf("\n\n       1   2   3   4   5   6   7   8   9  10  11  12  13\n");
	for (i=0; i<52; i++) {
		if (i%13 == 0) printf("\n%2d    ", (i/13)+1);
		printf("%2d  ", deck[i/13][i%13]);
	}

	printf("\n\n");
	return 0;
}
