#include<stdio.h>

int main()
{

	// syntax : [+/-]<Mantissa><e/E>[+/-]<Exponent>

	float egnum = +9E-2;
	float egnum2 = -9e-4;
	float egnum3 = +65E+2;
	float egnum4 = -6e+4;
	
	printf("%f\n",egnum);
	printf("%f\n",egnum2);
	printf("%f\n",egnum3);
	printf("%f\n",egnum4);
	
	return 0;
}
