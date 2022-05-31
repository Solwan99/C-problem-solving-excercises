/** Write a program that reads a student grade percentage and prints "Excellent" if his grade is greater than or equal 85,
 *  "Very Good" for 75 or greater; "Good" for 65, "Pass" for 50, "Fail" for less than 50.  **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	printf("Please Enter the student's grade ");

	float grade;

	scanf("%f",&grade);

	if (grade>=85)
	{
		printf("Excellent");
	}
	else if(grade>=75)
	{
		printf("Very Good");
	}
	else if(grade>=65)
	{
		printf("Good");
	}
	else if(grade>=50)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}

