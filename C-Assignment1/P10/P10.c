/** Write a program to make a simple calculator using switch-case.
 *The calculator takes the operation (+ or – or * or /)
 *The and takes the two input arguments and print the results.**/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char operator;
	float num1,num2;
	//double result;

	printf("Please Enter two numbers and the operation to be performed");

	scanf("%f  %c  %f",&num1,&operator,&num2);

	switch (operator)
		{
			case'+':
				printf("%f",num1+num2);
				//result=num1+num2;
				break;

			case'-':
				printf("%f",num1-num2);
				//result=num1-num2;
				break;

			case'*':
				printf("%f",num1*num2);
				//result=num1*num2;
				break;

			case'/':
				printf("%f",num1/num2);
				//result=num1/num2;
				break;


			default :
				//printf("%d",result);
				break;
		}
	return 0;
}
