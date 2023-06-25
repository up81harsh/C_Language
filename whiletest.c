#include <stdio.h>
int main()
{
	int a;
	printf("Enter the value:");
	scanf("%d", &a);
	
	while (a <= 100)
	{
		printf("Value is:%d\n", a);
		a++;
	}
	return 0;
}
