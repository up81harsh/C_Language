#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter a:");
	scanf("%d", &a);
	printf("Enter b:");
	scanf("%d", &b);
	printf("%d\n", a >> 1);
	printf("%d\n", a << 1);
	printf("%d\n", a ^ b);
	printf("%d\n",  a & b);
	printf("%d\n", b = ~b);
	return 0;
}
