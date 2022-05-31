/*
 ============================================================================
 Name        : P03.c
 Author      : Solwan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	// program to convert temperature from C to F

	float  C;
	double F;

	printf("Please Enter the temperature in Celsius degrees ");

	scanf("%f",&C);

	F=C*9/5+32;

	printf("The temperature in Fahrenheit = %lf",F);

	return 0;
}
