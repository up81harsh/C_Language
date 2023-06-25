//09.02.23 Without arguments and with return value
#include <stdio.h>
int sum(int a, int b);

int takenumber()
{
	int i;
	printf("Enter the Number ");
	scanf("%d", &i);
	return i;
}
int main()
{
	int a, b;
	printf("");
	scanf("%d", &a);
	printf("");
	scanf("%d", &b);
	int c;
//	c = sum(a, b);
	c = takenumber();
	printf("the number is  %d\n", c);
	return 0;
}
int sum(int a, int b)
{
	return a + b;
}
