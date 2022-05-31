/** Write a program to calculate the power of a number. The number and its power are input from user. **/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	printf("Enter a number and a power to calculate");

	unsigned int x,y;

	scanf("%u  %u",&x,&y);

	printf("%u to the power %u= %u",x,y,(unsigned int)pow(x,y));
	return 0;
}
