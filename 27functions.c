//09.02.23 With arguments and with return value
#include <stdio.h>
int sum(int a, int b);
int main()
{
	int a, b;
	printf("");
	scanf("%d", &a);
	printf("");
	scanf("%d", &b);
	int c;
	c = sum(a, b);
	printf("the sum is %d\n", c);
	return 0;
}
int sum(int a, int b)
{
	return a + b;
}
