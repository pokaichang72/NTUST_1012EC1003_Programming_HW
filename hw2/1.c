#include <stdio.h>


int main()
{
	int grade;

	printf("Enter numerical grade: ");

	if ( !scanf("%d", &grade) || grade > 100 || grade < 0 ) {
		printf("ERROR: The input must be a number between 0 and 100 inclusive.\n");
		return -1;

	} else {
		switch ( (int)(grade/10) ) {
			case 10:
			case 9:
				printf("Letter grade: A\n");
				break;

			case 8:
				printf("Letter grade: B\n");
				break;

			case 7:
				printf("Letter grade: C\n");
				break;

			case 6:
				printf("Letter grade: D\n");
				break;

			default:
				printf("Letter grade: F\n");
				break;
		}

		return 0;
	}
}
