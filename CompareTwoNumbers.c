#include<stdio.h>
	int main () {
	int num1, num2;
    	printf("Input the values for Number1 : ");
		scanf("%d",&num1);
		
		printf("Input the values for Number2 : ");
		scanf("%d",&num2);
	if (num1>num2)
	{
		printf("%d is Greater than %d",num1,num2);
	}
	else
	{
		printf("%d is Greater than %d",num2,num1);
	}
  return 0;
}
