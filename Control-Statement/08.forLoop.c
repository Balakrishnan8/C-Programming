#include"stdio.h"

// for loop 

int main()
{
	/*
	-> for loop is used to iterate the part of program several times.
	-> mostly for loop is used for traversing the array.
	
	-> Syntax:
	
			for(initialization ; expression ; incre/decre)
			{
				// block of codes;
			}
		
		NOTE: we can have more than one intialization,expression,increment or decrement by seperating comma and these three are optional in for loop.
		
	-> infinite for loop:
	
			for(;;)
			{
				block of codes;
			} 
		
	*/
	
	// example - sum of n natural numbers
	
	int number=0,sum=0,i;
	
	printf("Enter the nth number: ");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		sum += i;
	}
	printf("Sum of series is %d\n",sum);
	
	return 0;
}
