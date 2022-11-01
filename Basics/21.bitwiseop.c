#include"stdio.h"

int main()
{
	// bitwise operators are the operators used to perform the operations on bit level.
	
	/*
		Types of Bitwise Operator.
			&  - Bitwise AND operator.
			|  - Bitwise OR operator.
			^  - Bitwise exclusive OR operator.
			~  - One's Complement operator.
			<< - Right shift operator.
			>> - Left shift operator.	
	*/
	
	int a=6,b=8;
	// 6=0110, 8=1000
	
	printf("%d\n",a&b);   // 0110 & 1000 = 0000 = 0
	printf("%d\n",a|b);   // 0110 | 1000 = 1110 = 14
	printf("%d\n",a^b);   // 0110 ^ 1000 = 1110 = 14
	printf("%d\n",~a);	  // ~0110 => 1001 => 0110 => 0111 => -7
	printf("%d\n",a<<2);  // 0110<<2 => 0001 1000 = 24
	printf("%d\n",a>>2);  // 0110>>2 => 0001 = 1
	
	return 0;
}
