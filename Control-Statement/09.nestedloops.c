#include"stdio.h"

// nested loop

int main()
{
	/*
	
	-> nested loop is the looping of statements inside another loop.
	-> Any number of loop can be defined inside another loop.
	-> nested level can be defined at 'n' times.
	-> we can define any type of loop inside another loop.(while loop inside for loop).
	
	Syntax:
	
		outer_loop
		{
			inner_loop
			{
				// codes of inner loop;
			}
			// codes of outer loop;
		}
	
	*/
	
	int i,j;
	
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d\t",i*j);
		}
		printf("\n");
	}
	
	
	int rows,columns;
	
	int k=1,l=1;
	
	printf("Enter the Row: ");
	scanf("%d",&rows);
	
	printf("Enter the Column: ");
	scanf("%d",&columns);
	
	while(l<=rows)
	{
		int q=1;
		while(q<=columns)
		{
			printf("%d\t",k);
			k++;
			q++;
		}
		printf("\n");
		l++;
	}
	
	

	return 0;
}




