#include <stdio.h>
	#include <stdlib.h>
	
#include<string.h>
#include "sum.h"			
	
	int main()
	{

		int n;
		int length;
                 int *arr;
		char str[1000];
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
	}
	         
		//even or odd
		even(n);

	
		// sort array
		 printf("Enter a length of an array\n");
                 scanf("%d",&length);
  		 arr=(int *)malloc(n*sizeof(int));
   		 if(arr==NULL)
   		     printf("Memory Not allocated");
  		  else
   		 {
    		    printf("Array elements\n");
        		for(int i=0;i<length;i++)
       		 {
           	 scanf("%d",&arr[i]);
        		}
       		 for(int i=0;i<length;i++)
        	{
        	    printf("%d\n",arr[i]);
       		 }
    		sort(length,arr);
   		 free(arr);
   		  }
	





           printf("Enter a string with _  ");
           scanf("%s",str);
           char *token=strtok(str,"_");
            while(token!=NULL){
	    printf("\"%s\",",token);
	    token=strtok(NULL,"_");

		}
		
	printf("Facorial of given number is %d",fact(n));
		
return 0;		
}
