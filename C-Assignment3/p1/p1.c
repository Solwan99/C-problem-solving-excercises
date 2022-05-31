#include<stdio.h>
int summation(int numbers_size, int* numbers);

int main (void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int numbers[]={1,2,3,4,50,44555,856522};
	printf("%d",summation(7,numbers));
	return 0;
}
int summation(int numbers_size, int* numbers)
{
	int sum=0;
	char counter;
	for(counter=0;counter<numbers_size;counter++)
	{
		sum+=*(numbers+counter);
	}
	return sum;
}
