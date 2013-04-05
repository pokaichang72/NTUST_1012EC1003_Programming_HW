#include <stdio.h>


int main()
{
	char d_grade; //desired grade
	float req_avg, cur_avg; // minimum average requird, current avarage
	float final_per; //final exam percentage

	/* Enter the data */
	printf("Enter desired grade> ");
	scanf("%c", &d_grade);
	printf("Enter minimum average required> ");
	scanf("%f", &req_avg);
	printf("Enter current average in course> ");
	scanf("%f", &cur_avg);
	printf("Enter how much the final counts as a percentage of the course grade> ");
	scanf("%f", &final_per);

	/* Print the information */
	printf("You need a score of %3.2f on the final to get a %c\n",  (req_avg*100-cur_avg*(100-final_per))/final_per, d_grade);

	return 0;
}
