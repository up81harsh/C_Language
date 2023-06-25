#include <stdio.h>
int main()
{
	int a;
	printf("Enter the Value: ");
	scanf("%d", &a);
	int y=0,z;
	for (z=0;z<=a; z++)
	{
		printf("The Value is: %d %d\n", z, y);
	}
	return 0;
}
