

void selectionSort(int* const arr,const int arrSize)
{
	int i,min;
	for(i=0;i<arrSize-1;i++)
	{
		int j;
		min=i;
		for(j=i+1;j<arrSize;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		arr[j]=arr[j]^arr[min];
		arr[min]=arr[j]^arr[min];
		arr[j]=arr[j]^arr[min];
	}

}
