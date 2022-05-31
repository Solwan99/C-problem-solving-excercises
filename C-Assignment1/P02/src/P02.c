/*
 ============================================================================
 Name        : P02.c
 Author      : Solwan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	// write a program to print your name and your grade in a new line.
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	// C doesn't have the primitive data type within it, so I'll create an array of char to store my name and my grade in it.


	char name[] ="Solwan Shokry Ahmed Mohamed";
	char grade[]="Third year, Computer dept.";

	printf("My name is: %s \n",name);
	printf("My grade is: %s \n",grade);


	return 0;
}
