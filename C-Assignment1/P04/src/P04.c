/*
 ============================================================================
 Name        : P04.c
 Author      : Solwan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ===
=========================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	printf("Please Enter the radius of the Circle in Centimeters.");
	float r;
	double Area,Circumference;
	scanf("%f",&r);
	Area=r*r*3.14;
	Circumference=2*r*3.14;

	printf("The Area= %lf   The Circumference= %lf",Area,Circumference);


	return 0;
}
