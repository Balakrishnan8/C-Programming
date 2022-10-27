#include"stdio.h"
#include"stdbool.h"

int main()
{
	// Boolean data type contains two values 0(false) and 1(true).
	// stdbool.h header file is used for boolean data type.
	
	// syntax - bool variable_name = true/false;
	bool var = false;
	if (var==true)
	{
		printf("It\'s True\n");
	}
	else
	{
		printf("It\'s False\n");
	}
	
	// bool array
	bool arr[3] = {true,false,false};
	for(int i=0;i<3;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
