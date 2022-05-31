#include <stdio.h>

int main (void)
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	unsigned int L,R,A,B,max=0;
	printf("Please Enter two integers L and R toFind the maximal value of A XOR B, where 1 <= L <= R <= 1000 \n");
	scanf("%d",&L);
	scanf("%d",&R);

	for(A=L;A<B;A++)
	{
		for(B=A;B<R;B++)
		{
			if((A^B)>max)
			{
				max=A^B;
			}
		}
	}

	printf("the maximal value of A XOR B= %d",max);

}
