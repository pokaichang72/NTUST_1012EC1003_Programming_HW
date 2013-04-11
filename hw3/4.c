#include <stdio.h>
#include <math.h>


int scan_data(char *o, float *v)
{
	while (1) {
		do {
			scanf("%c", o);  //get the operator
		} while ( *o == 10 || *o == 13 );  //ignore the Line feed and Carriage return

		if (*o == 'q') return 0;  //terminate if input 'q' detected
		if ( !scanf("%f", v) || !( *o == '+' || *o == '-' || *o == '*' || *o == '/' || *o == '^' ) ) {  // get the value and check input
			printf("Syntax error:\"%c %f\". Please try again.\n", *o, *v);
			continue;
		}
		return 1;
	}
}


int main()
{
	char operator;
	float input_value;

	while ( scan_data(&operator, &input_value) ) {
		printf("%d and %f\n", operator, input_value);
	}

}
