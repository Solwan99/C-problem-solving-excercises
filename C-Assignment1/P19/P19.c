/**Write a program to display half pyramid using stars pattern. **/
//   * * * * *
//   * * * *
//   * * *
//   * *
//   *

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char c='*';
	for(char i=5;i>0;i--)
	{
		for(char j=0;j<i;j++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}
