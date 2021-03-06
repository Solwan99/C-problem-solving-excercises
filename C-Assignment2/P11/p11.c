/*(11) Write a C function that returns 1 if the input number is a power of 2
and return 0 if the input number is not power of 2.
For example: 1, 2 and 16 are power of 2. 0, 10 and 30 are not power of 2.*/

#include<stdio.h>
int isPowerOf2(int);

int main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	if(isPowerOf2(256))					//to test, if the function returned 1
	{
		printf("Number is a power of two");  	//then the number is a power of 2
	}
	else{										//if it returned 0
		printf("Number is NOT a power of two");	//then the number is NOT a power of 2
	}
}

int isPowerOf2(int checkNum)
{
	int counter;
	for(counter=checkNum;counter>2;counter/=2)		//start the loop with the number to be checked, and keep dividing it by 2 until it reaches the final division (if we reach the final result of the number=2 we break the loop and it is a power of 2)
	{
		if(counter%2==0)		//if the number is divide-able by 2, divide it by 2 and continue the loop
		{
			continue;
		}
		else		//if it's not divide-able by 2, then it's not a power of two
		{
			return 0;
		}
	}
	return 1;
}
