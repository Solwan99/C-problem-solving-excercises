
long executeOperation(int num1, char operator,int num2)
{
	if (operator!='+' && operator!='-' && operator!='/' && operator!='*' )
	{
		printf("Please Enter an operator from * / - + ");
	}

	else
	{

		switch(operator){
			case('+'):
					return num1+num2;
					break;
			case('-'):
					return num1-num2;
					break;
			case('*'):
					return num1*num2;
					break;
			case('/'):
					return num1/num2;
					break;
	}
	}
}
