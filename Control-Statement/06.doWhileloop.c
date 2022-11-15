#include"stdio.h"
#include"stdlib.h"

// Do while loop

int main()
{
	/*
	-> do-while loop is the post tested loop.
	-> do-while loops is mainly used where loop should be execute once before the condition checks. 
	-> mostly used in menu driven programs.	
	-> do-while syntax:
		
			do
			{
				// block of codes
			}while(expression);
			
	NOTE: do-while loop will execute infinity times, if the non-zero value is passed as a condition.
	
			do
			{
				// block of codes
			}while(non-zero); // 1,2,3,....n
	
	*/
	
	// example : menu driven program
	
	int choice;
	
	do
	{
	
		printf("\n\tMenu\n1)C programming\n2)Java programming\n3)Python programming\n4)Quit\n");
	
		printf("\nEnter your Choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\n\tC Programming Language is Mother Of All Programming Language.\n");
				break;
				
			case 2:
				printf("\n\tJava Programming Language is King Of All Programming Language.\n");
				break;
				
			case 3:
				printf("\n\tPython Programming Language is Powerful than All Programming Language.\n");
				break;
				
			case 4:
				printf("\n\tQuit\n\n");
				exit(0);
			
			default:
				printf("\n\tSelect the Correct Choice.\n");		
		}
	}	
	while(choice!=4);
	

	return 0;
}
