void swap(int* firstNum,int* secondNum)
{
	*firstNum=  *firstNum ^ *secondNum;
	*secondNum= *firstNum ^ *secondNum;
	*firstNum=  *firstNum ^ *secondNum;
}
