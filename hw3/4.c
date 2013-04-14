#include <stdio.h>
#include <time.h>


int main()
{
	int ans, in, c;
	char yn;
	srand(time(NULL));

	/* Let's start the game! */
	while (1) {
		yn = '0';
		ans = (rand()%1000)+1;

		printf("I have a number between 1 and 1000.\n");
		printf("Can you guess my number?\n");
		printf("Please enter your first guess.\n");

		/* guess until you get it right */
		while (1) {
			while ( !scanf("%d", &in) ) {
				printf("Error: Please enter a integer.\n");
				while ( (c = getchar()) != '\n' && c != EOF);  //remember to clear the input buffer!
			}

			if (in > ans) {  //too high
				printf("Too high. Try again.\n");

			} else if (in < ans) {  //too low
				printf("Too low. Try again.\n");

			} else {  //bingo!
				printf("Excellent! You guessed the number!\n");
				printf("Would you like to try again (y or n)? ");

				/* ask the user to play again */
				while (1) {
					scanf("%c", &yn);
					while((c = getchar()) != '\n' && c != EOF);
					if (yn == 'n') {
						printf("bye\n");
						return 0;
					}
					else if (yn == 'y') {
						printf("\n");
						break;
					}
					else printf("Please enter y or n: ");
				}
			}
			if (yn == 'y') break;
		}
	}
}
