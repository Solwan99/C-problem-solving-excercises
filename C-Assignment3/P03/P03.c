

void bubbleSort(int* const arr,const int arrSize)
{
	int i;
	for(i=0;i<arrSize;i++)
	{
		if(arr[i]>arr[i+1])
		{
			arr[i]=arr[i]^arr[i+1];
			arr[i+1]=arr[i]^arr[i+1];
			arr[i]=arr[i]^arr[i+1];
		}
	}
}
