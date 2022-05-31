/*
 ============================================================================
 Name        : P08.c
 Author      : Solwan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned int num,rootInt;

	printf("Please Enter a number to check if it's a perfect square or not");

	scanf("%u",&num);

	float rootF;    //using implicit casting to check if the number is a whole or not

	rootF=sqrt(num);

	rootInt=rootF;

	if(rootInt==rootF)				// if the value in the integer variable is the same after assigning a float value in it
	{
		printf("The number you entered is a perfect square");		//then the number is a perfect square
	}

	else
	{
		printf("The number you entered is NOT a perfect square"); 		//if not; then the number isn't a perfect square
	}

	return 0;
}
