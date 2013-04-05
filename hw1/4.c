#include <stdio.h>


int main()
{
	float w, h;

	printf("\nBMI Calculator\n====================\n\n");

	printf("Please enter your weight (in kilograms): ");
	scanf("%f", &w);
	printf("Please enter your height (in meters): ");
	scanf("%f", &h);

	printf("\nYour BMI is %.1f\n", w/(h*h));

	printf("\nBMI VALUES\nUnderweight:\tless than 18.5\nNormal:\t\tbetween 18.5 and 24.9\nOverweight:\tbetween 25 and 29.9\nObese:\t\t30 or greater\n\n");


	return 0;
}
