#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter the value:");
	scanf("%d", &a);
	printf("Enter the another value:");
	scanf("%d", &b);
	printf("IF/ELSE CONDITION:\n");
	if(a==b)
	{
		printf("The value of a is equal to b.\n");
	}
	else if(a>b)
	{
		printf("The value of a is greater then b.\n");
	}
	else
	{
		printf("The value of a is not greater then b.\n");
	}
	printf("\n");
	printf("\n");
	printf("ARITHMETIC OPERATOR:\n");
	printf("Sum is: %d\n", a+b);
	printf("Subtraction is: %d\n", a-b);
	printf("Multiplication is: %d\n", a*b);
	printf("Division is: %d\n", a/b);
	printf("Thank You(^_^)\n");
	return 0;
}
