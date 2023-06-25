//05.02.23 looping
#include <stdio.h>
int main()
{
	int a;
	printf("Enter the value:");
	scanf("%d", &a);
	
	do
	{
		printf("Value is %d\n", a);
		a++;
	} while(a <= a+1);
	
	return 0;
}
