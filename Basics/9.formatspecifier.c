#include"stdio.h"

int main()
{
	// format specifier is a string used in the formatted input and output functions. starts with % character.
	
	/*
		%d or %i - integer.
		%c - character.
		%f - float.
		%lf - double.
		
		%s - string.
		%g - float with fixed precision.
		
		%u - unsigned.
		%o - octal unsigned integer.
		%x or %X - hexadecimal.
		%e or %E - exponent.
		%ld - long integer.
		%p - address in hexadecimal.
	*/
	
	int number = 10;
	int negnum = -20;
	int octval = 0102; //starts with 0.
	int hexval = 0x2;  //starts with 0x.
	float fnum = 2.1343;
	float e_num = 0.0003200060; // format -> [firstnum].[precision] e +or- [precision value]
	int pnum = 5;
	char character = 'A';
	
	printf("%d\n",number);
	printf("%u\n",negnum);
	printf("%o - %d\n",octval,octval);
	printf("%X\n",hexval);
	printf("%f\n",fnum);
	printf("%g\n",fnum);
	printf("%e\n",e_num);
	printf("%p\n",&pnum);
	printf("%c\n",character);
	printf("%s\n","Hello string");
	
	
	// minimum field width specifier.
	printf("%5d\n",number);
	printf("%-5d\n",number);
	
	// Specifying Precision.
	printf("%.2f\n",fnum);
	
	
	
	return 0;
}
