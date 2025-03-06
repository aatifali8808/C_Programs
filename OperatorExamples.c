// Unary Operator, used to operation on a Single operands or variable ( ++, --)
#include <stdio.h>
int main()
{
	int a = 10;
	printf("actual value of a %d", a); // a=10
	a++;
	printf("\nIncremented value of a %d", a); // a=11,a+1,10+1
	a--;
	printf("\nDecremented value of a %d", a); // a=10,a-1,11-1
	return 0;
}

// Binary Operator, used to operation between two operands or variable ( +, -, =, /, *, %, >, <, ==, <=, >=, etc)
#include <stdio.h>
int main()
{
	int a, b, c;
	a = 25;
	b = 10;
	c = a - b;
	printf("Given no. a = %d\n", a);
	printf("Given no. b = %d\n", b);
	printf("Subtraction of Given numbers = %d", c);
	return 0;
}

// Ternary Operator, used to operation among three operands or variable ( &, &&, |, ||, ?)
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter 3 numbers\n");
	scanf("%d%d%d", &a, &b, &c);

	if ((a > b) && (a > c))
	{
		printf("%d is a Greater number", a);
	}
	else if ((b > c) && (b > c))
	{
		printf("%d is a Greater number", b);
	}
	else if ((c > a) && (c > b))
	{
		printf("%d is a Greater number", c);
	}
	else
	{
		printf("You entre invalid input");
	}

	return 0;
}

// Vowels Using OR ( || )operators
#include <stdio.h>
int main()
{
	char ch;
	printf("Entre Alphabets to Find that is Vowels or Not\nPlease entre in Small Letters : ");
	scanf("%c", &ch);

	if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
	{
		printf("The Alphabet you entered '%c' is a Vowels", ch);
	}

	else
	{
		printf("The Alphabet you entered '%c' is a Consonant", ch);
	}

	return 0;
}
