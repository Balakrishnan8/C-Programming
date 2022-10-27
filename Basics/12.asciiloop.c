#include"stdio.h"

int main()
{
	// Ascii value from 0 to 255
	
	int k;
	for(k=0;k<=255;k++)
	{
		printf("%c - %d\n",k,k);
	}
	
	// sum of the ascii value for given string
	int i = 0, sum = 0;
	char str[20];
	
	printf("Enter the String: ");
	scanf("%s",str);
	
	while(str[i] != '\0')
	{
		printf("The ascii value for %c is %d. \n",str[i],str[i]);
		sum += str[i];
		i += 1;
	}

	printf("sum of the ascii value of the given string is %d.\n",sum);
	return 0;
}
