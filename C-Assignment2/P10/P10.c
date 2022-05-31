#include <string.h>
#include <stdio.h>
int countHoles(char[]);

void main(void){
	countHoles("54561535848465165");
	return;
}

int countHoles(char nummber[])
{
	int counter=0;
	int loopCounter;

	for(loopCounter=0;loopCounter<strlen(nummber);loopCounter++)
	{
		if(nummber[loopCounter]=='1'|| nummber[loopCounter]=='2'||nummber[loopCounter]=='3'||nummber[loopCounter]=='5'||nummber[loopCounter]=='7')
		{
			continue;
		}
		else if(nummber[loopCounter]=='0'||nummber[loopCounter]=='4'||nummber[loopCounter]=='6'||nummber[loopCounter]=='9')
			{
				counter++;
			}
		else if(nummber[loopCounter]=='8')
			{
				counter+=2;
			}
	}
	printf("%d",counter);
	return counter;

}
