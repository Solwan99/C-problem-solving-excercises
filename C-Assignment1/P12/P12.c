/**Write a program that reads a positive integer and computes the factorial.**/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	unsigned int num;
	unsigned long long factorial=1;

	printf("Please Enter a positive integer to calculate the factorial");

	scanf("%u",&num);

	for (int i=num;i>0;i--)
	{
		factorial*=i;
	}

	printf("Factorial of %u = %llu",num,factorial);

	return 0;
}
