#include"stdio.h"

// Infinite loops in c

int main()
{
	/*
	
	-> Infinite Loop is the looping which does terminate the loop execution.
	-> It is also known as Indefinite loop or endless loop.
	-> either produces a continuous output or no output.
	-> In infinite loop the condition never gets false.
	
	-> we can create infinite loop through various loop structure - for, while, do...while, goto, C macros. 
	
	*/
	
	/*
	
	Infinite for loop:
	
		for(;;)
		{
			// block of codes;
		}
		
	Infinite while loop:
	
		while(1)
		{
			// Block of codes;
		}
	
	Infinite do...while loop:
	
		do
		{
			// Block of codes;
		}
		while(1);
		
	Infinite goto statement:
	
		infinite_loop
			// infinite loop body
			
		goto infinite_loop;
		
	Infinite loop using C macros:
	
		#include"stdio.h"
		#define infinite for(;;)
		
		int main()
		{
			infinite
			{
				printf("Hello world");
			}
			return 0;
		}
	
	*/
	
	/*
	
	Unintentional infinite loop:
	
	1) put semicolon (;) at wrong place.
	
			while(a<10);   // this leads to infinite loop.
			{
				// block of codes
			}
	
	2) Place the Assignment operator '=' instead of '==' .
	
			while(a=10)  // a=10 will be always true, because 10 is non zero. If we assign a=0 then condition gets false and loop does not execute.
			{
				// block of codes
			}
			
	3) Using wrong loop condition.
	
			for(int i=1;i>=1;i++)   // i value always greater than or equal to one.
			
	4) Break statement stops inner loop not outer loop.
	
			while(1)
			{
				for(i=0;i<10;i++)
				{
					if(i%2==0)
					{
						break;
					}
				}
			}
			
	5) Floating point error.
	
			Computer will represent the 4.0 as 3.999999 or 4.0000001. whenever the condition like a==4.0 , it never gets false.
			
			while(a==4.0)
			{
				a += 0.1;
			}
	
	*/
	
	printf("Infinite loops and Unintentional Infinite loops\n");
	
	
	return 0;
}


























