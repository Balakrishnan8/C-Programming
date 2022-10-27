#include<stdio.h>

int function()
{
	int x = 10;
	static int y = 10;
	x += 1;
	y += 1;
	printf("%d %d\n",x,y);
	return 0;
}

int main()
{
	function();
	function();
	function();
	function();
	function();
	return 0;
}
