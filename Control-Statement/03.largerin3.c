#include"stdio.h"

// find largest number in given 3.

int main()
{
	int num1,num2,num3;
	
	printf("Enter three numbers\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1==num2 && num1==num3)
	{
		printf("All number are Equal\n");
	}
	else if(num1>num2 && num1>num3)
	{
		printf("%d is greater\n",num1);
	}
	else if(num2>num3)
	{
		printf("%d is greater\n",num2);
	}
	else
	{
		printf("%d is greater\n",num3);
	}

	return 0;
}
