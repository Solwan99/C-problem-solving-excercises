/*
 ============================================================================
 Name        : P07.c
 Author      : Solwan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	printf("Please Enter three integers to compare and print the smallest among them");
	int num[3];
	int min=INT_MAX;

	for(int i=0;i<3;i++){
		scanf("%d",&num[i]);
	}


	for(int i=0;i<3;i++)
	{
		if(num[i]<min)
		{
				min=num[i];
		}
	}

	printf("The smallest integer number is %d",min);

	return 0;
}
