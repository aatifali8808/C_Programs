/*
W.A.P a program in C take 4 integer numbers and check the following condition
1) Number 1 is greater than  ((!(x>y)&&!(y>z))||((y<z)||(y>a)))
if this condition become true then print (Hello World)
*/
#include <stdio.h>
int main()
{
	int x, y, z, a;
	x = 10;
	y = 20;
	z = 30;
	a = 5;

	if ((!(x > y) && !(y > z)) || ((y < z) || (y > a)))
	{
		printf("Hello world");
	}

	else
	{
		printf("Mistake");
	}

	return 0;
}
