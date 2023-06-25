//11.02.23 PRINT VIA FOR LOOP
#include <stdio.h>
int main()
{
	printf("TABLE:\n");
	printf("\n");
	int a;
	printf("Enter the table you want to print:");
	scanf("%d", &a);
	printf("Table of Integer = %d\n", a);
	int i;
	for(i=1;i<11;i++)
	{
		printf("%d X %d = %d\n", a, i, a*i);
	}
	printf("Table of %d is printed(^_^)\n", a);
	printf("____________________________________________________________________________________________________________\n");
	printf("\n");
	printf("SQUARE to a NUMBER:\n");
	printf("\n");
	int b;
	printf("Enter the Number of Squares you want to print:");
	scanf("%d", &b);
	int j;
	for(j=0;j<=b;j++)
	{
		printf("SQUARE of NUMBER:%d is = %d\n", j, j*j);
	}
	printf("NUMBER of SQUARE to %d is printed(^_^)\n", b);
	printf("____________________________________________________________________________________________________________\n");
	return 0;
}
