#include"stdio.h"

// switch statement.

int main()
{
	/*
		alternative to if-else-if ladder statement.
		allows us to execute multiple operations for the different possible values of single variable called switch variable.
		
		syntax:
		
				switch(expression)
				{
					case value1:
						//block of code
						break;
						
					case value2:
						//block of code
						break;
						
					   ....
						
					default:
						//executes, If all cases are not matched
				}
				
		
			-> The switch expression and case value must be Integer or Character type.
			-> break in the case statement is optional, if the break is not used inside each case, then all the case will be executed.
			-> Default case will execute if all the cases is not matched.
			-> No two cases have same values.
			-> if the matched case contains break statement,then all the case after that will be skipped and control goes to out of the switch statement.
			-> warning: switch condition has boolean value [-switch-bool]
			The warning is simply telling you that you're using switch statement with boolean value. For true boolean values, you should just use if - else statement, not switch . Note, you will only get this warning if you use true boolean type.
	
	*/


	// examples.

	int number=0;
	
	printf("Enter the number: ");
	scanf("%d",&number);
	
	switch(number)
	{
		case 0:
			printf("It is Zero\n");
			break;
			
		case 1:
			printf("It is a one\n");
			break;
			
		case 2:
			printf("It is a two\n");
			break;
			
		default:
			printf("greater than two\n");	
	
	}


	// Finding grade for given mark

	int mark;
	
	printf("Enter Your Mark: ");
	scanf("%d",&mark);
	
	if(mark<=100)
	{	
		switch(mark/10)
		{
			case 10:
				printf("Your grade is \'O\'\n");
				break;
				
			case 9:
				printf("Your grade is \'A+\'\n");
				break;
				
			case 8:
				printf("Your grade is \'A\'\n");
				break;
				
			case 7:
				printf("Your grade is \'B+\'\n");
				break;
				
			case 6:
				printf("Your grade is \'B\'\n");
				break;
				
			case 5:
				printf("Your grade is \'C\'\n");
				break;
			
			case 4:
				printf("Your Grade is \'D\'\n");
				break;
				
			case 3:
			case 2:
			case 1:
				printf("You are Fail.\n");
				break;
				
			default:
				printf("Please Enter Valid Mark.\n");
		
		}
	}
	else
		printf("Your mark is more than 100. Kindly enter Correct mark\n");

	return 0;
}
















