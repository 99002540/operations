int sum(int number1, int number2)
	{
		return number1 + number2;
	}
int diff(int number1, int number2)
	{
		return number1 - number2;
	}
int mul(int number1, int number2)
	{
		return number1 * number2;
	}
int division(int number1, int number2)
	{
		return number1 / number2;
	}
int mod(int number1, int number2)
	{
		return number1 % number2;
	}

int prime(int number){
    int c=0;
    for(int i=2;i<number;i++)
    {
        if(number%i==0) c++;

    }
    if(c==0) return 1;
    else return 0;

}
