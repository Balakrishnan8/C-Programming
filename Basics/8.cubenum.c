#include<stdio.h>

// program to find cube of the given number.

int main()
{
	int number;
	
	printf("Enter the number: ");
	scanf("%d",&number);
	
	printf("Cube of the %d is %d\n",number,number*number*number);
	//eg: 5 -> 5*5*5 -> 125
	
	return 0;
}
