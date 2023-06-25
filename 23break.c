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
		if(b>30)
		{
			break;
		}
		
		
	}
	return 0;
}
