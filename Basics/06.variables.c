#include<stdio.h>

int main()
{
	// declaring variables
	int number; // integer type - can store positive and negative numbers
	char character; // character type - can store only one character.
	float fnumber; // float type - can store floating number.
	
	/*
	Rules
		> Start with underscore, lowercase or uppercase.		
		> contains number but should not start with.
		> can't contain special symbol.
	*/
	
	// initializing variable
	number = 10;
	character = 'A';
	fnumber = 12.7;
	
	printf("integer - %d\n",number);  // format specifier for int is %d or %i
	printf("character - %c\n",character); // format specifier for character is %c
	printf("float - %f\n",fnumber); // format specifier for float is %f
	
	return 0;
}
