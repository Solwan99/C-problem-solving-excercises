/*
 ============================================================================
 Name        : P01.c
 Author      : Solwan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//Write a program that take two integers from the user and print the results of this equation


	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	int num1,num2;
	long result;
	printf("Please enter the first number");
	scanf("%d",&num1);

	printf("Please enter the second number");
	scanf("%d",&num2);

	result=((num1+num2)*3)-10;
	printf("Result= %ld",result);

	return 0;
}
