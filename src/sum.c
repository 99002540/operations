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

int prime(int n){
    int c=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) c++;

    }
    if(c==0) return 1;
    else return 0;

}
