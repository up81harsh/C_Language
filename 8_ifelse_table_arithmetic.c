#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the value:");
	scanf("%d", &a);
	
	printf("Enter the another value:");
	scanf("%d", &b);
	printf("__________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
	printf("IF/ELSE CONDITION\n");
	if(a==b)
	{
		printf("Both Values are equal (^_^)\n");
	}
	else if(a>=b)
	{
		printf("Value of a is greater then b (^_^)\n");
	}
	else
	{
		printf("Value of a is less then b (^_^)\n");
	}
	printf("____________________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
	printf("Table you want to print:");
	scanf("%d", &c);
	printf("%d x 1 = %d\n", c, c*1);
	printf("%d x 2 = %d\n", c, c*2);
	printf("%d x 3 = %d\n", c, c*3);
	printf("%d x 4 = %d\n", c, c*4);
	printf("%d x 5 = %d\n", c, c*5);
	printf("%d x 6 = %d\n", c, c*6);
	printf("%d x 7 = %d\n", c, c*7);
	printf("%d x 8 = %d\n", c, c*8);
	printf("%d x 9 = %d\n", c, c*9);
	printf("%d x 10 = %d\n", c, c*10);
	printf("YOUR TABLE IS PRINTED (^_^)\n");
	printf("____________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
	printf("ARITHMETIC OPERATION:\n");
	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d - %d = %d\n", a, b, a-b);
	printf("%d x %d = %d\n", a, b, a*b);
	printf("%d / %d = %d\n", a, b, a/b);
	printf("_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
	printf("YOUR ALL PROGRAMS ARE SUCCESSFULLY PRINTED (^_^)\n");
	
	return 0;
	
	
}
