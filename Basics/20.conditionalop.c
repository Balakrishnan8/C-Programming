#include"stdio.h"

int main()
{
	// Conditional operator
	
	/*
	Conditional operator is also known as ternary operator.
	Conditional operator is used for decision making can be used instead of if-else.
	represened by the symbol ?:
	
	Syntax : Expression1 ? Expression2 : Expression3
	
	if Expression1 is True, then Expression2 will execute.
	if Expression1 is False, then Expression3 will execute.	
	
	*/
	
	int result=92;
	
	(result<40)?(printf("Fail\n")):(printf("Pass\n"));
	// Expresion1 ? Expression2 : Expression3;
	
	int a=10,b;
	b=((a==10)?(5):(10));
	
	printf("%d\n",b);
	
	return 0;
}
