#include"stdio.h"

int main()
{
	// constant are values which cannot be changed in the program.
	/*
		two ways to define constant.
		
			1) const keyword.
			2) #define preprocessor.	
	*/
	
	// syntax : const data-type <var> = <value>
	const float PI = 3.14; 
	printf("%g\n",PI);
	
	
	/*
		// we can't assign a new value or modify the constant variable. error will occur.
		const float PI = 3.14;
		PI = 4   // error occurs here.
	*/
	
	/*	
		// we can't do declaration and initialize seperately. error will occur.
		const float PI;
		PI = 3.14; 	
	*/
	
	return 0;
}

