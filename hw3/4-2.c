#include <stdio.h>
#include <math.h>


int scan_data(char *o, float *v)
{
	do {
		scanf("%c", o);  //get the operator
	} while ( *o == 10 || *o == 13 || *o == 32 );  //ignore the Line feeds, Carriage returns and Spaces which might be scanned as a character and occur errors

	if (*o == 'q') return 0;  //terminate if input 'q' detected

	scanf("%f", v);  // get the operand
	return 1;
}


void do_next_op(char o, float v, float *a)
{
	switch (o) {  //do the calculation

		case '+':
			*a += v;
			break;

		case '-':
			*a -= v;
			break;

		case '*':
			*a *= v;
			break;

		case '/':
			*a /= v;
			break;

		case '^':
			*a = pow(*a, v);
			break;

		default:
			printf("Unknown operator: %c\n", o);
			break;
	}
}


int main()
{
	char operator;
	float accumulator=0, operand;

	while ( scan_data(&operator, &operand) ) {  //get data
		do_next_op(operator, operand, &accumulator);  //perform the operation
		printf("result so far is %.1f\n", accumulator);  //print status
	}

	printf("final result is %.1f\n", accumulator);

	return 0;
}
