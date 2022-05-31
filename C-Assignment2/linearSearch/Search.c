#include <stdio.h>
#define NotFound -1
#define arraySize 10

int linearSearch(int arr[],int size, int element);

int main (void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	int array[arraySize]={5,8,9,10,17,6,0,88,66,10};
	int index;
	//printf("Please Enter an item to search for it in the array");
	index=linearSearch(array,arraySize,17);
	if (index!=-1)
	{
		printf(" The index of the search element is %d",index);

	}
	else
	{
		printf(" The number you are searching for is not an element of the array");

	}
	return 0;
}


int linearSearch(int arr[],int size, int element)
{
	int i;
	for (i=0;i<arraySize;i++)
	{
		if(arr[i]==element)
		{
			return i;
		}
	}
	return -1;
}


