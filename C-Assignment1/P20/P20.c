//Display the pattern
//     *
//    ***
//   *****
//  *******
// *********
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char c='*';
	for(char j=9;j>0;j--)
	{
		printf(" ");
		for(char i=0;i<4;i++)
		{
			printf(" %c",c);
		}

		printf("\n");

	}
	return 0;
}
