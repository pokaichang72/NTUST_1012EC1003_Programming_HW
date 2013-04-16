#include <stdio.h>
#include <time.h>

#define RANGE 1000


int main()
{
	int ans, in, correct, c;  //the [answer], [inputtded number], [guessed or not] and the [garbage-can]
	char yn;  //yes or no
	srand(time(NULL));

	/* Let's start the game! */
	while (1) {
		/* Initialize variables */
		yn = '0';
		correct = 0;
		ans = (rand()%RANGE)+1;

		printf("I have a number between 1 and %d.\n", RANGE);
		printf("Can you guess my number?\n");
		printf("Please enter your first guess.\n");

		/* Guess until you get it right */
		while (!correct) {
			while ( !scanf("%d", &in) ) {
				printf("Error: Please enter a integer.\n");
				while ( (c = getchar()) != '\n' && c != EOF );  //remember to clear the input buffer!
			}

			if (in > ans) {  //too high!
				printf("Too high. Try again.\n");

			} else if (in < ans) {  //too low!
				printf("Too low. Try again.\n");

			} else {  //bingo!
				correct = 1;
				printf("Excellent! You guessed the number!\n");
				printf("Would you like to try again (y or n)? ");

				/* ask the user to play again */
				while (1) {
					scanf("%c", &yn);  //get input
					while( (c = getchar()) != '\n' && c != EOF );  //clear the input buffer
					if (yn == 'n') {
						printf("bye!\n");
						return 0;
					} else if (yn == 'y') {
						printf("\n");
						break;
					} else {
						printf("Please enter y or n: ");
					}
				}
			}
		}
	}
}
