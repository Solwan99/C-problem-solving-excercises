#define True 1
#define False 0


char checkMultiple(int num, int num2)
{
	int counter;
	for(counter=num;counter>num2;counter-=num2)
	{
		if(counter%num2==0)
		{
			continue;
		}
		else
		{
			return 0;
		}

	}

	return 1;
}
