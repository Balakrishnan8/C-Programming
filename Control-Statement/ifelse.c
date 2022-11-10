#include"stdio.h"

// Conditional statement > if-else

int main()
{
	/*
	The if-else statement is used to execute a if block, when the given condition is True. otherwise the else block will execute.
		
	syntax:
		if (expression)
		{
			//block of codes;
		}		   
		else
		{
			//block of codes;
		}
		
	
	Types :
		-> if statement
		-> if-else statement
		-> if else-if ladder
		-> nested if (if statement inside another if)
		
		
	syntax:
	if statement:
	
			if(expression)
			{
				block of codes;
			}
		
	if-else statement:
	
			if(expression)
			{
				block of codes;
			}
			else
			{
				block of codes;
			}
			
	if else-if ladder:
	
			if(expression-1)
			{
				block of codes;
			}
			else if(expression-2)
			{
				block of codes;
			}
				...
				...
				...
			else if(expression-n)
			{
				block of codes;
			}
			else
			{
				block of codes;
			}
		
	nested if:
		
			if(expression)
			{
				if(expression)
				{
					block of code
				}
				else
				{
					block of code
				}
			}
			else
			{
				if(expression)
				{
					block of code
				}
				else
				{
					block of code
				}
			}
	
	*/
	
	// find largest number among three numbers
	
	int num1, num2, num3;
	
	printf("Enter Three Numbers\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1>num2 && num1>num3)
	{
		printf("The largest number is %d\n",num1);
	}
	else if(num2>num3)
	{
		printf("The largest number is %d\n",num2);
	}
	else
	{
		printf("The largest number is %d\n",num3);
	}
	
	
	return 0;
}
