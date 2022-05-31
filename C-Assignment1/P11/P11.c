/**Print sum of first 100 integers. (With data validation)**/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int sum=0;

	for(char i=0;i<100;i++)
	{
		sum+=i;
	}

	printf("The sum of the first 100 integers = %d",sum);

	return 0;
}
