/*Write a C function to count the number of 1’s in an unsigned 8-bit integer.*/

#include <stdio.h>
int countBinaryOnes(unsigned char);
int main(void){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	printf("%d",countBinaryOnes(247));
}
int countBinaryOnes(unsigned char checkInteger)
{
	int onesCount=0,bitNum;

	unsigned char maskingNum=1;    			//masking variable   0000 0001

	for(bitNum=0;bitNum<8;bitNum++)		//to loop on the number from bit 0 to bit 7
	{
		if((checkInteger>>bitNum)& maskingNum)	//bit wise AND with 1 to return 1 if the bit value was 1
			{
				onesCount++;					//if the cond. is true, then we increase the number of ones
			}
	}
	return onesCount;
}
/* example: decimal unsigned integer number 247 is written as  1111 0111
 * bit wise AND with mask  0000 0001 will be as follows:
 *
 * 		 1111 0111
 * &	 0000 0001
 * ------------------
 * 		 0000 0001			>>>>onesCount++   1
 *
 * then we shift right the number to check the next bit
 * 		 0111 1011
 * 	 &	 0000 0001
 * --------------------
 * 		 0000 0001			>>>>onesCount++   2
 *
 * then we shift right the number to check the next bit
 * 		0011 1101
 * 	 &  0000 0001
 * ---------------------
 * 		0000 0001			>>>>onesCount++   3
 *
 * then we shift right the number to check the next bit
 * 	    0001 1011
 * 	 &	0000 0001
 * ------------------
 * 	    0000 0001			>>>>onesCount++   4
 *
 * 	then we shift right the number to check the next bit
 * 	    0000 1101
 * 	 &	0000 0001
 * --------------------
 * 		0000 0001			>>>>onesCount++	  5
 *
 * 	then we shift right the number to check the next bit
 * 	    0000 0110
 * 	 &	0000 0001
 * ------------------
 * 		0000 0000			>>>>nothing happens, increases the loop counter.
 *
 *
 * 		and so on
 * */
