/*
 ============================================================================
 Name        : P05.c
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

	printf("Please Enter a character to print the ASCII value associated with it.");
	char c;

	scanf("%c",&c);

	printf("ASCII value=  %d",c);

	return 0;
}
