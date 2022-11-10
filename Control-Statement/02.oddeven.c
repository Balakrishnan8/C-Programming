#include"stdio.h"

// program to find odd or even.

int main()
{
	int number;
	
	printf("Enter the Number: ");
	scanf("%d",&number);
	
	//All the even numbers are divisible by 2 and its remainder is 0
	
	if(number%2==0)
	{
		printf("The number %d is Even\n",number);
	}
	else
	{
		printf("The number %d is Odd\n",number);
	}
	
	return 0;
}
