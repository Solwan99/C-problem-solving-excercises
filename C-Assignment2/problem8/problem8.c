#include <stdio.h>

void main(void){

}

void displayPrime(int num1,int num2)
{
	int count;
	for(count=num1;count<=num2;count++)
	{
		int checkNum;
		for(checkNum=2;checkNum<count/2;checkNum++)
			{
				if(count%checkNum!=0)
				{
					printf("%d  /n",count);
				}
			}
	}
}
