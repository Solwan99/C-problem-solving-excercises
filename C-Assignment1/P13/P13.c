/**Write a program that reads a positive integer and checks if it is a prime**/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	printf("Please Enter a positive integer to check if it is a prime number");

	unsigned int num;


	scanf("%u",&num);
	char counter=0;
	for(int i=num-1;i>1;i--)
	{
		if(num % i==0)
		{
			counter++;
		}
	}

	if (counter==0)
	{
		printf("Prime number");
	}

	else
	{
		printf("NOT a prime number");
	}
	return 0;
}
