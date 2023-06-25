//11.02.23 FACTORIAL VIA RECURSIVE METHOD
#include <stdio.h>
//DECLARE
int factorial(int value)
{
	if(value == 0 || value == 1)
	{
		return 1;
	} else 
	{
		return (value*factorial(value - 1));
	}
}
//DEFINE
int main()
{
	int number;
	printf("Enter the Number You want the Factorial:");
	scanf("%d", &number);
	printf("Factorial of %d! = %d\n", number, factorial(number));
	printf("\nTHANK YOU (^_^)\nYOUR PROGRAM IS PRINTED\n____________________________________________________________________________________________________________________________________________________________");
	
}
