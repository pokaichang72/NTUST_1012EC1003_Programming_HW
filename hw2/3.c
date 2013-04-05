#include <stdio.h>
#include <math.h>
#include <float.h>


int main()
{
	int x, i=1, i2;
	double ans=1, a=1;

	printf("Please enter a integer x, and I'll give you e^x: ");

	if ( !scanf("%d", &x) ) {
		printf("ERROR input value.\n");
		return -1;

	} else {

		// Taylor series. Let the answer accurate to 10 decimal places.
		while ( fabs(a) > 0.00000000005) {

			a = pow(x, i);
			for ( i2=1; i2<=i; i2++ ) {
				a /= i2;
			}

			ans += a;
			i++;

			// If the answer is larger then the max value for double, stop the programme and return an error.
			if ( ans > DBL_MAX ) {
				printf("ERROR: Answer is greater then %.0lf\n", DBL_MAX);
				return -1;
			}
		}

		printf("e^%d = %.10lf\n", x, ans);

		return 0;
	}
}
