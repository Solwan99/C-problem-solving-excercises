/** Write a program to display English alphabets from A to Z.**/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char c=65;

	for(char i=c;i<=90;i++)
	{
		printf("%c \n",i);
	}

	return 0;
}
