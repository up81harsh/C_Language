//07.02.23
#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter the value:");
	scanf("%d", &a);

	
	for (; a<=30;a++)
	{
		printf("Age is: %d\n", a);
		printf("Enter the Value:");
		scanf("%d", &b);
		if(b>18)
		{
			continue;
		}
		
		printf("Print the next querry without taking iteration from the first.\n");
		printf("Print the next querry without taking iteration from the first.\n");
		printf("Print the next querry without taking iteration from the first.\n");
		printf("Print the next querry without taking iteration from the first.\n");
		
	}
	return 0;
}
