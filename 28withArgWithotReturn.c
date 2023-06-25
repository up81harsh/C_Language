//09.02.23 With arguments and without return value
#include <stdio.h>
int sum(int a, int b);

void printstar(int n)
{
	int i;
	printf("Star:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("%c ", '*');
		printf("\n");
	}
}

int main()
{
	int a, b;
	printf("a:");
	scanf("%d", &a);
	printf("b:");
	scanf("%d", &b);
	int c;
	c = sum(a, b);
	int n;
	printstar(n);
	printf("%d + %d = %d\n", a, b, c);
	return 0;
}
int sum(int a, int b)
{
	return a + b;
}
