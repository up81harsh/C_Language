//07.02.23
#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter first value:");
	scanf("%d", &a);
	printf("Enter the second value:");
	scanf("%d", &b);
	
	for (; a<=100, b<=100; b++)
	{
		printf("Values is: %d %d\a\t Product is: %d\n", a, b, a*b);
		a++;
	}
	return 0;
}
