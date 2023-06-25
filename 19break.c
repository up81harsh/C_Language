#include <stdio.h>
int main()
{
	int a;
	printf("Enter the Value: ");
	scanf("%d", &a);
	while (1)
	{
		if (a < 10)
		{
			break;
		}
		printf("%d ", a);
		a++;
	}
	return 0;
}
