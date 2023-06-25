//05.02.23 do-while loop
#include <stdio.h>
int main()
{
	int i;
	printf("Enter the Value:");
	scanf("%d", &i);

	
	do
	{
		printf("VALUE IS: %d\n", i);
		i++;
	} while (i < 35);
	
	return 0;
}
