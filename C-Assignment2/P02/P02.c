#include <stdio.h>


void checkAlphabet (char c)
{

	if(c>='a' && c<='z')
	{
		printf("The character is an alphabet");
	}
	else if(c>='A' && c<='Z')
	{
		printf("The character is an alphabet");
	}
	else
	{
		printf("The character is NOT an alphabet");
	}

	return;
}
int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char c;
	printf("Enter a character ");
	scanf("%c",&c);
	checkAlphabet(c);
	return 0;
}
