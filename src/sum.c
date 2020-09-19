#include<stdion.h>
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
	
void even(int number){
if(number%2==0) {
	printf("Even Number");}
	
	else{
		printf("Odd number");
	}
}
	
void sort(int length,int arr[]){
int i,j,t;
for (i = 0; i < length; i++)
        printf("\n%d ", *(arr + i));
for (i = 0; i < length; i++) {

        for (j = i + 1; j < n; j++) {

            if (*(arr + j) < *(arr + i)) {

                t = *(arr+ i);
                *(arr + i) = *(arr + j);
                *(arr + j) = t;
            }
        }
    }
    for (i = 0; i < length; i++)
        printf("\n%d ", *(arr + i));
}	
	
	
	
	

}
