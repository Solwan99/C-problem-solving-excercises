/*
 ============================================================================
 Name        : P06.c
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

	int a,b;
	printf("Please Enter two integers to compare.");
	scanf("%d %d",&a,&b);

	if(a==b){
		printf("The two integers you Entered are equal");
	}
	else if(a>b){
		printf("The two integers that you've aren't equal, %d is larger than %d",a,b);
	}
	else {
			printf("The two integers that you've aren't equal, %d is larger than %d",b,a);
		}


	return 0;
}
