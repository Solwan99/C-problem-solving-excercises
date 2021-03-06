/*(12) Write a C function that calculates the required heater activation time
according to the input temperature of water.
- if input temperature is from 0 to 30, then required heating time = 7 mins.
- if input temperature is from 30 to 60, then required heating time = 5 mins.
- if input temperature is from 60 to 90, then required heating time = 3 mins.
- if input temperature is more than 90, then required heating time = 1 mins.
- if temperature is invalid (more than 100), return 0 */

int heaterActivationTime(int waterTemp){

	if(waterTemp>=0 && waterTemp<30)
	{
		return 7;		//- if input temperature is from 0 to 30, then required heating time = 7 mins.
	}

	else if(waterTemp>=30 && waterTemp<60)
	{
		return 5;		//- if input temperature is from 30 to 60, then required heating time = 5 mins.
	}

	else if(waterTemp>=60 && waterTemp<90)
	{
		return 3;		//- if input temperature is from 60 to 90, then required heating time = 3 mins.
	}

	else if(waterTemp>=90 && waterTemp<100)
	{
		return 1;		//- if input temperature is more than 90, then required heating time = 1 mins.
	}
	else
	{
		return 0;		//- if temperature is invalid (more than 100), return 0
	}
}
