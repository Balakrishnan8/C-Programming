#include"stdio.h"

// while loop

int main()
{
	/*
		-> pre-tested loop
		-> it is used mostly when the number of iteration is unknown in advance.
		-> syntax:
				
				while(expression)
				{
					// block of codes;
				}
				
		-> Infinite while loop:
		
				while(1)
				{
					// block of codes;
				}	
	*/
	
	// example
	
	int num=10;
	
	while(num>0)
	{
		printf("%d\n",num);
		num-=1;  // if you forget to decrement num value, then num will always 10 and never equals to 0, so it leads to continous condition false that is loop will be infinite.
	}

	return 0;
}

