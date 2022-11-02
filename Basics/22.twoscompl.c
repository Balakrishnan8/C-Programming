#include"stdio.h"

// 2's complement

int main()
{
	/*
	one's complement is the invert of all bit of the original binary number.
	
	2's complement is the obtained by 1 to the one's complement.
	
	eg:
			0010 0111  -> binary number
			1101 1000  -> one's Complement can be obtained by inverting all bits of the binary number.
			
			2s complement can be obtained by adding one to one's complement.
			
			1101 1000	-> one's complement
				   +1
		   -----------	
		    1101 1001   -> 2's complement.
			
	*/
	
	
	//  program to find 1s and 2s complement of the given binary number.
	
	int len=0;
	int carry = 1;
	char binary[len+1];
	char onescomp[len+1];
	char twoscomp[len+1];
	
	printf("How many bit ?");
	scanf("%d",&len);
	
	printf("Enter the Binary number without space: ");
	scanf("%s",binary);
	
	// 1s complement
	for(int i=0;i<len;i++)
	{
		if(binary[i] == '0')
			onescomp[i] = '1';
		else if(binary[i] == '1')
			onescomp[i] = '0';
	}
	onescomp[len] = '\0';
	printf("One's complement number is %s\n",onescomp);
	
	//2s complement
	for(int j=len-1;j>=0;j--)
	{
		if(onescomp[j]=='1'&&carry==1)
			twoscomp[j] = '0';
		else if(onescomp[j]=='0'&&carry==1)
		{
			twoscomp[j] = '1';
			carry=0;
		}
		else
			twoscomp[j] = onescomp[j];			
	}
	twoscomp[len] = '\0';
	printf("Two's complement number is %s\n",twoscomp);
}
