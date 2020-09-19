#include <stdio.h>
	#include <stdlib.h>
	#include "sum.h"			
	
	int main()
	{

		int n;					
	        //sum
		printf("Sum = %d",  sum(10, 20));
		//diff
		printf("Difference = %d",  diff(10, 20));
		//mul
		printf("Multiplication= %d",  mul(10, 20));
		//div
		printf("division = %d",  division(10, 20));
		//mod
		printf("mod = %d",  mod(10, 20));
		//prime or not 
                printf("Enter a number");
		scanf("%d",&n);
		if(n==1||n==0){printf("%d is not a prime number",n ); exit;}
                int y=prime(n);
                if(y==1) printf("%d is a prime number",n);
                else printf("%d is not a prime number",n);
                return 0;
		
		//
		if(n%2==0) printf("Even number");
		else printf("odd");

		return 0;
	}
