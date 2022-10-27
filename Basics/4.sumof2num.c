#include<stdio.h>

//sum of 2 numbers

int main()
{
	int firstnumber, secondnumber, sum=0 ;
	
	printf("Enter two numbers: ");
	scanf("%d%d",&firstnumber,&secondnumber);
	
	sum = firstnumber + secondnumber;
	
	printf("sum of %d and %d is %d\n",firstnumber,secondnumber,sum);
		
	return 0;
}
